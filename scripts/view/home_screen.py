# import sys
import os
from PyQt5.uic import loadUi
# from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QDialog
# from scripts import SCREEN_PATH
from .constants import SCREEN_PATH
# SCREEN_PATH = os.path.abspath(os.path.join(os.path.dirname(os.path.realpath(__file__)), "../screens"))

HOME_SCREEN_PATH = os.path.join(SCREEN_PATH, 'home.ui')

# "C:\\Users\\User\\Documents\\GitHub\\Ask-kita-modes\\screens\\home.ui"

class HomeScreen(QDialog):
    def __init__(self):
        super(HomeScreen, self).__init__()
        # self.stackedWidget = widget
        loadUi(HOME_SCREEN_PATH, self)
        # self.start.clicked.connect(goto_start)
        # self.settings.clicked.connect(goto_settings)


    # def goto_start_screen(self):
    #     print("GOING TO START SCREEN")
    #     pass
    #
    # def goto_settings_screen(self):
    #     print("GOING TO SETTINGS")
    #     pass
    #
    # def goto_start_screen(self):
    #     print("GOING TO START SCREEN")
    #     pass

    # def goto_transcription_screen(self):
    #     if not self.transcription_screen_index:
    #         transcription = TranscriptionScreen(self.stackedWidget)
    #         self.stackedWidget.addWidget(transcription)
    #         self.transcription_screen_index = self.stackedWidget.currentIndex() + 1
    #         self.stackedWidget.setCurrentIndex(self.transcription_screen_index)
    #     else:
    #         self.stackedWidget.setCurrentIndex(self.transcription_screen_index)
