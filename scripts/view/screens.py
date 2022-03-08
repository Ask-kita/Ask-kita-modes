from PyQt5.uic import loadUi
from PyQt5.QtWidgets import QDialog
from .constants import HOME_SCREEN_PATH, SETTINGS_SCREEN_PATH, TRANSCRIPTION_SCREEN_PATH, COMMAND_SCREEN_PATH


class HomeScreen(QDialog):
    def __init__(self):
        super(HomeScreen, self).__init__()
        loadUi(HOME_SCREEN_PATH, self)


class SettingsScreen(QDialog):
    def __init__(self):
        super(SettingsScreen, self).__init__()
        loadUi(SETTINGS_SCREEN_PATH, self)


class TranscriptionScreen(QDialog):
    def __init__(self):
        super(TranscriptionScreen, self).__init__()
        loadUi(TRANSCRIPTION_SCREEN_PATH, self)


class CommandScreen(QDialog):
    def __init__(self):
        super(CommandScreen, self).__init__()
        loadUi(COMMAND_SCREEN_PATH, self)
