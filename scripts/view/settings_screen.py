import os
from PyQt5.uic import loadUi
from PyQt5.QtWidgets import QDialog
from .constants import SCREEN_PATH

SETTINGS_SCREEN_PATH = os.path.join(SCREEN_PATH, 'settings.ui')

# "C:\\Users\\User\\Documents\\GitHub\\Ask-kita-modes\\screens\\home.ui"

class SettingsScreen(QDialog):
    def __init__(self):
        super(SettingsScreen, self).__init__()
        loadUi(SETTINGS_SCREEN_PATH, self)


    def goto_start_screen(self):
        print("GOING TO START SCREEN")
        pass

    def goto_settings_screen(self):
        print("GOING TO SETTINGS")
        pass