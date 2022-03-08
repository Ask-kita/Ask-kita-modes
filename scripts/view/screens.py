from PyQt5.uic import loadUi
from PyQt5.QtWidgets import QDialog, QFileDialog
from .constants import HOME_SCREEN_PATH, SETTINGS_SCREEN_PATH, TRANSCRIPTION_SCREEN_PATH, COMMAND_SCREEN_PATH


class HomeScreen(QDialog):
    def __init__(self):
        super(HomeScreen, self).__init__()
        loadUi(HOME_SCREEN_PATH, self)


class SettingsScreen(QDialog):
    def __init__(self):
        super(SettingsScreen, self).__init__()
        loadUi(SETTINGS_SCREEN_PATH, self)

    def get_file_path(self):
        fpath, _ = QFileDialog.getOpenFileName(self, "Upload a Corpus", "", "text files (*.txt)")
        return fpath


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
