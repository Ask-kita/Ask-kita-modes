# import queue
# import sounddevice as sd
# import vosk
#
# vosk.SetLogLevel(-1)
# import sys
# import json
# import os
# import pyautogui
# import threading
#
#
# class Ask_KITA(threading.Thread):
#     def __init__(self) -> None:
#         super(Ask_KITA, self).__init__()
#         self.daemon = True
#         self.paused = True  # Start out paused.
#         self.state = threading.Condition()
#
#         self.q = queue.Queue()
#         device_info = sd.query_devices(kind='input')
#         self.samplerate = int(device_info['default_samplerate'])
#         model = vosk.Model(self._get_model_path())
#         self.recogniser = vosk.KaldiRecognizer(model, self.samplerate)
#         self.previous_line = ""
#         self.previous_length = 0
#
#     def run(self):
#         self.resume()
#         with sd.RawInputStream(samplerate=self.samplerate, blocksize=8000, device=None, dtype='int16', channels=1,
#                                callback=self.callback):
#             while True:
#                 with self.state:
#                     if self.paused:
#                         self.state.wait()  # Block execution until notified.
#                         with self.q.mutex:
#                             self.q.queue.clear()
#                 # Do stuff...
#                 self.write_current_phrase()
#
#     def pause(self):
#         with self.state:
#             self.paused = True  # Block self.
#
#     def resume(self):
#         with self.state:
#             self.paused = False
#             self.state.notify()  # Unblock self if waiting.
#
#     def get_current_phrase(self) -> str:
#         """Returns current phrase
#           :return: current phrase
#           :rtype: str
#           """
#         d = self._get_current_phrase_dict()
#         (_, value), = d.items()
#         return value
#
#     def write_current_phrase(self):
#         d = self._get_current_phrase_dict()
#         (key, value), = d.items()
#         if value and (value != self.previous_line or key == 'text'):
#             self._write(d)
#             self.previous_line = value
#
#     def _get_current_phrase_dict(self):
#         data = self.q.get()
#         if self.recogniser.AcceptWaveform(data):
#             d = json.loads(self.recogniser.Result())
#         else:
#             d = json.loads(self.recogniser.PartialResult())
#         return d
#
#     def _write(self, phrase):
#         pyautogui.press('backspace', presses=self.previous_length)
#         if 'text' in phrase:
#             pyautogui.typewrite(phrase['text'] + '\n')
#             self.previous_length = 0
#         else:
#             pyautogui.typewrite(phrase['partial'])
#             self.previous_length = len(phrase['partial'])
#
#     def callback(self, indata, frames: int, time, status) -> None:
#         """This is called (from a separate thread) for each audio block."""
#         if status:
#             print(status, file=sys.stderr)
#             sys.stdout.flush()
#         self.q.put(bytes(indata))
#
#     def _get_model_path(self) -> str:
#         """Returns path of the model
#           :return: model path
#           :rtype: str
#           """
#         full_path = os.path.realpath(__file__)
#         file_dir = os.path.dirname(full_path)
#         model_path = os.path.join(file_dir, '../../model')
#         return model_path
