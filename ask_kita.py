import queue
import sounddevice as sd
import vosk
vosk.SetLogLevel(-1)
import sys
import json
import pyautogui
import os
from multiprocessing import Process

class Ask_KITA:
    def __init__(self, stop_word="kita"):
        self.model_path = self._get_model_path()
        self.q = queue.Queue()
        self.previous_line = ""
        self.previous_length = 0
        self.stop_phrase = f"stop {stop_word}"

        device_info = sd.query_devices(kind='input')
        self.samplerate = int(device_info['default_samplerate'])
        model = vosk.Model(self.model_path)

        self.recogniser = vosk.KaldiRecognizer(model, self.samplerate)
        self.stopper = vosk.KaldiRecognizer(model, self.samplerate, f'["{self.stop_phrase}"]')

    def recognise_speech(self):
        try:
            with sd.RawInputStream(samplerate=self.samplerate, blocksize=8000, device=None, dtype='int16', channels=1,
                                   callback=self._callback):
                print('#' * 80)
                print('Press Ctrl+C to stop the recording')
                print('#' * 80)
                self._write_current_phrase()
        except KeyboardInterrupt:
            print('\nDone -- KEYBOARDiNTERRUPT')
        except Exception as e:
            print('exception', e)

    def _write_current_phrase(self):
        while True:
            data = self.q.get()
            d = self._get_current_phrase(self.recogniser, data)
            (key, value), = d.items()
            if self._stop(data):
                self._clear()
                return
            if value and (value != self.previous_line or key == 'text'):
                print(d)
                self._write(d)
                self.previous_line = value

    def _stop(self, data):
        d = self._get_current_phrase(self.stopper, data)
        (key, value), = d.items()
        return key == 'text' and value == self.stop_phrase

    def _get_current_phrase(self, recogniser, data):
        if recogniser.AcceptWaveform(data):
            d = json.loads(recogniser.Result())
        else:
            d = json.loads(recogniser.PartialResult())
        return d

    def _get_model_path(self):
        full_path = os.path.realpath(__file__)
        file_dir = os.path.dirname(full_path)
        model_path = os.path.join(file_dir, 'model')
        return model_path

    def _callback(self, indata, frames, time, status):
        """This is called (from a separate thread) for each audio block."""
        if status:
            print(status, file=sys.stderr)
            sys.stdout.flush()
        self.q.put(bytes(indata))

    def _clear(self):
        pyautogui.press('backspace', presses=self.previous_length)

    def _write(self, phrase):
        pyautogui.press('backspace', presses=self.previous_length)
        if 'text' in phrase:
            pyautogui.write(phrase['text'] + '\n')
            self.previous_length = 0
        else:
            pyautogui.typewrite(phrase['partial'])
            self.previous_length = len(phrase['partial'])


def start_recognising(stop_word):
    kita = Ask_KITA(stop_word=stop_word)
    kita.recognise_speech()


def start_ask_kita_process(stop_word="kita"):
    process = Process(target=start_recognising, args=(stop_word,))
    process.start()
    return process