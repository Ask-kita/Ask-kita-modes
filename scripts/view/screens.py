from PyQt5.uic import loadUi
from PyQt5.QtWidgets import QDialog
from .constants import HOME_SCREEN_PATH, SETTINGS_SCREEN_PATH, TRANSCRIPTION_SCREEN_PATH, COMMAND_SCREEN_PATH


# def change_button_to_stop(button):
#     button.setStyleSheet('border-radius:20px; font: 75 18pt "MS Shell Dlg 2";background-color:red')
#     button.setText("Stop")
#
#
# def change_button_to_start(button, trans):
#     button.setStyleSheet('border-radius:20px; font: 75 18pt "MS Shell Dlg 2";background-color:green')
#     button.setText(f"{}")

class HomeScreen(QDialog):
    def __init__(self):
        super(HomeScreen, self).__init__()
        loadUi(HOME_SCREEN_PATH, self)


class SettingsScreen(QDialog):
    def __init__(self):
        super(SettingsScreen, self).__init__()
        loadUi(SETTINGS_SCREEN_PATH, self)


class ModeScreen(QDialog):
    def __init__(self):
        super(ModeScreen, self).__init__()
        self.start_button = None
        self.start_text = None

    def change_button_to_stop(self):
        self.start_button.setStyleSheet('border-radius:20px; font: 75 18pt "MS Shell Dlg 2";background-color:red')
        self.start_button.setText("Stop")

    def change_button_to_transcribe(self):
        self.start_button.setStyleSheet('border-radius:20px; font: 75 18pt "MS Shell Dlg 2";background-color:green')
        self.start_button.setText(f"{self.start_text}")


class TranscriptionScreen(ModeScreen):
    def __init__(self):
        super(TranscriptionScreen, self).__init__()
        loadUi(TRANSCRIPTION_SCREEN_PATH, self)
        self.start_button = self.transcribe
        self.start_text = 'Transcribe'


class CommandScreen(ModeScreen):
    def __init__(self):
        super(CommandScreen, self).__init__()
        loadUi(COMMAND_SCREEN_PATH, self)
        self.start_button = self.start
        self.start_text = 'Start'
