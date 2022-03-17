import queue
import sounddevice as sd
import vosk

vosk.SetLogLevel(-1)
import json
import os
import threading
from .executors import CommandExecutor, TranscriptionExecutor
from .parser import Parser
from scripts.constants import Mode, Language


def _get_model_path(language) -> str:
    full_path = os.path.realpath(__file__)
    file_dir = os.path.dirname(full_path)
    model_path = os.path.join(file_dir, f'../../models/{language}')
    return model_path


class Ask_KITA(threading.Thread):
    def __init__(self):
        super(Ask_KITA, self).__init__()
        self.daemon = True
        self.paused = True  # Start out paused.
        self.running = True
        self.state = threading.Condition()

        self.q = queue.Queue()
        device_info = sd.query_devices(kind='input')
        self.samplerate = int(device_info['default_samplerate'])
        self.previous_line = ""
        self.command_executor = CommandExecutor()
        self.transcription_executor = TranscriptionExecutor()
        self.parser = Parser()
        self.model = None
        self.recogniser = None
        self.corpus_uploaded = False
        self.set_mode_and_language(Mode.TRANSCRIPTION.value, Language.ENGLISH.value)

    def run(self):
        self.resume()
        with sd.RawInputStream(samplerate=self.samplerate, blocksize=8000, device=None, dtype='int16', channels=1,
                               callback=self._callback):
            while self.running:
                with self.state:
                    if self.paused:
                        self.state.wait()  # Block execution until notified.
                        with self.q.mutex:
                            self.q.queue.clear()
                self._perform_action()

    def pause(self):
        with self.state:
            self.paused = True  # Block self.

    def resume(self):
        with self.state:
            self.paused = False
            self.state.notify()  # Unblock self if waiting.

    def end(self):
        self.running = False

    def set_mode_and_language(self, mode, language):
        if not self.corpus_uploaded:
            self._set_recogniser(language)
        self.mode = mode

    def update_vocab(self, file_path):
        try:
            vocab = self.parser.load_custom_vocab(file_path)
            self.recogniser = vosk.KaldiRecognizer(self.model, self.samplerate, vocab)
            self.corpus_uploaded = True
        except:
            print("COULDNT SUCCESSFULLY Upload corpus")

    def _perform_action(self):
        d = self._get_current_phrase_dict()
        (key, value), = d.items()
        if value and (value != self.previous_line or key == 'text'):
            self._act(d)
            self.previous_line = value

    def _act(self, d):
        if self.mode == Mode.TRANSCRIPTION.value:
            self.transcription_executor.execute(d)
        elif self.mode == Mode.COMMAND.value:
            self.command_executor.execute(d)
        else:
            raise NotImplementedError("[Ask-Kita] Command not found")

    def _get_current_phrase_dict(self):
        data = self.q.get()
        if self.recogniser.AcceptWaveform(data):
            d = json.loads(self.recogniser.Result())
        else:
            d = json.loads(self.recogniser.PartialResult())
        return d

    def _callback(self, indata, frames: int, time, status) -> None:
        """This is called (from a separate thread) for each audio block."""
        self.q.put(bytes(indata))

    def _set_recogniser(self, language):
        self.model = vosk.Model(_get_model_path(language))
        self.recogniser = vosk.KaldiRecognizer(self.model, self.samplerate)
