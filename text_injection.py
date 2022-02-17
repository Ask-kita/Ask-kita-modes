# import queue
# import sounddevice as sd
# import vosk
#
# vosk.SetLogLevel(-1)
# import sys
# import json
# import pyautogui
# import os
#
#
# class Ask_KITA:
#     def __init__(self):
#         self.model_path = self._get_model_path()
#         self.q = queue.Queue()
#         self.previous_line = ""
#         self.previous_length = 0
#
#     def recognise_speech(self):
#         try:
#             if not os.path.exists(self.model_path):
#                 print("Please download a model for your language from https://alphacephei.com/vosk/models")
#                 print(f"and unpack into {self.model_path}.")
#
#             device_info = sd.query_devices(kind='input')
#             samplerate = int(device_info['default_samplerate'])
#             model = vosk.Model(self.model_path)
#
#             with sd.RawInputStream(samplerate=samplerate, blocksize=8000, device=None, dtype='int16', channels=1,
#                                    callback=self._callback):
#                 print('#' * 80)
#                 print('Press Ctrl+C to stop the recording')
#                 print('#' * 80)
#                 rec = vosk.KaldiRecognizer(model, samplerate)
#                 while True:
#                     data = self.q.get()
#                     if rec.AcceptWaveform(data):
#                         d = json.loads(rec.Result())
#                     else:
#                         d = json.loads(rec.PartialResult())
#                     for key in d.keys():
#                         if d[key]:
#                             if d[key] != self.previous_line or key == 'text':
#                                 print(d)
#                                 # self._write(d)
#                                 self.previous_line = d[key]
#
#         except KeyboardInterrupt:
#             print('\nDone -- KEYBOARDiNTERRUPT')
#
#         except Exception as e:
#             print('exception', e)
#
#     def _get_model_path(self):
#         full_path = os.path.realpath(__file__)
#         file_dir = os.path.dirname(full_path)
#         model_path = os.path.join(file_dir, 'model')
#         return model_path
#
#     def _callback(self, indata, frames, time, status):
#         """This is called (from a separate thread) for each audio block."""
#         if status:
#             print(status, file=sys.stderr)
#             sys.stdout.flush()
#         self.q.put(bytes(indata))
#
#     def _write(self, phrase):
#         pyautogui.press('backspace', presses=self.previous_length)
#         if 'text' in phrase:
#             pyautogui.write(phrase['text'] + '\n')
#             self.previous_length = 0
#         else:
#             pyautogui.write(phrase['partial'])
#             self.previous_length = len(phrase['partial'])
#
#
# kita = Ask_KITA()
# kita.recognise_speech()
