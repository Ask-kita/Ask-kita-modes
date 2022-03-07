# import sys
# import os
# from PyQt5.uic import loadUi
# from PyQt5 import QtWidgets
# from PyQt5.QtWidgets import QDialog, QApplication, QWidget, QStackedWidget
# from ask_kita import Ask_KITA
#
# HOME_SCREEN = os.path.join('screens', 'home.ui')
# TRANSCRIPTION_SCREEN = os.path.join('screens', 'transcription.ui')


# class HomeScreen(QDialog):
#     def __init__(self, widget):
#         super(HomeScreen, self).__init__()
#         self.stackedWidget = widget
#         loadUi(HOME_SCREEN, self)
#         self.transcription_screen_index = None
#         self.start.clicked.connect(self.goto_transcription_screen)
#
#     def goto_transcription_screen(self):
#         if not self.transcription_screen_index:
#             transcription = TranscriptionScreen(self.stackedWidget)
#             self.stackedWidget.addWidget(transcription)
#             self.transcription_screen_index = self.stackedWidget.currentIndex() + 1
#             self.stackedWidget.setCurrentIndex(self.transcription_screen_index)
#         else:
#             self.stackedWidget.setCurrentIndex(self.transcription_screen_index)
#
#
# class TranscriptionScreen(QDialog):
#     def __init__(self, widget):
#         super(TranscriptionScreen, self).__init__()
#         self.stackedWidget = widget
#         loadUi(TRANSCRIPTION_SCREEN, self)
#         self.transcribe.clicked.connect(self.switch_transcription)
#         self.home.clicked.connect(self.goto_home_screen)
#
#         self.kita = Ask_KITA()
#         self.ask_kita_is_running = False
#         self.ask_kita_is_paused = False
#
#     def switch_transcription(self):
#         if self.ask_kita_is_running and not self.ask_kita_is_paused:
#             print("Pause ask kita")
#             self.pause_ask_kita()
#
#         elif self.ask_kita_is_paused:
#             print("Resume ask kita")
#             self.resume_ask_kita()
#
#         else:
#             print("Start ask kita")
#             self.start_ask_kita()
#
#     def pause_ask_kita(self):
#         self.kita.pause()
#         self.ask_kita_is_paused = True
#         self.change_button_to_transcribe()
#
#     def resume_ask_kita(self):
#         self.kita.resume()
#         self.ask_kita_is_paused = False
#         self.change_button_to_stop()
#
#     def start_ask_kita(self):
#         self.kita.start()
#         self.ask_kita_is_running = True
#         self.change_button_to_stop()
#
#     def change_button_to_stop(self):
#         self.transcribe.setStyleSheet('border-radius:20px; font: 75 18pt "MS Shell Dlg 2";background-color:red')
#         self.transcribe.setText("Stop")
#
#     def change_button_to_transcribe(self):
#         self.transcribe.setStyleSheet('border-radius:20px; font: 75 18pt "MS Shell Dlg 2";background-color:green')
#         self.transcribe.setText("Transcribe")
#
#     def goto_home_screen(self):
#         self.stackedWidget.setCurrentIndex(0)


# def run():
#     app = QApplication(sys.argv)
#     widget = QStackedWidget()
#     widget.setWindowTitle("Ask-KITA")
#     home = HomeScreen(widget)
#     widget.addWidget(home)
#     widget.setFixedWidth(1200)
#     widget.setFixedHeight(800)
#     widget.show()
#     try:
#         sys.exit(app.exec_())
#     except:
#         print("exiting")
