import sys
from PyQt5.QtWidgets import QApplication, QStackedWidget

from scripts.view import HomeScreen, SettingsScreen, TranscriptionScreen, CommandScreen
from .constants import Screen, Mode, Language


class Controller:
    def __init__(self):
        self.app = QApplication(sys.argv)
        self.widget = QStackedWidget()
        self.widget.setWindowTitle("Ask-KITA")
        self.widget.setFixedWidth(1200)
        self.widget.setFixedHeight(800)
        self._add_screens_to_stacked_widget(self._get_all_screens())

    def run(self):
        self.widget.setCurrentIndex(Screen.HOME)
        self.widget.show()
        try:
            sys.exit(self.app.exec_())
        except:
            print("exiting")

    def _add_screens_to_stacked_widget(self, screens):
        for index in range(len(screens)):
            self.widget.addWidget(screens[index])

    def _get_all_screens(self):
        self.home = HomeScreen()
        self.settings = SettingsScreen()
        self.transcription = TranscriptionScreen()
        self.command = CommandScreen()
        self._set_add_event_handlers()
        return {Screen.HOME: self.home, Screen.SETTINGS: self.settings, Screen.TRANSCRIPTION: self.transcription,
                Screen.COMMAND: self.command}

    def _set_add_event_handlers(self):
        # home
        self.home.settings.clicked.connect(self._goto_settings)
        self.home.start.clicked.connect(self._goto_start)

        # settings
        self.settings.home.clicked.connect(self._goto_home)

        # transcription
        self.transcription.home.clicked.connect(self._goto_home)

        # command
        self.command.home.clicked.connect(self._goto_home)
        # self.command.start.clicked.connect(self._goto_start_command_mode)

    def _goto_start(self):
        mode, language = self._get_mode_and_language()
        if mode == Mode.TRANSCRIPTION.value:
            self._goto_transcription()
        elif mode == Mode.COMMAND.value:
            self._goto_command()
        else:
            print(mode, "HUH???")

    def _goto_home(self):
        print("going home")
        self.widget.setCurrentIndex(Screen.HOME)

    def _goto_transcription(self):
        print("transcribing")
        self.widget.setCurrentIndex(Screen.TRANSCRIPTION)

    def _goto_settings(self):
        print("going to settings")
        self.widget.setCurrentIndex(Screen.SETTINGS)

    def _goto_command(self):
        print("command mode")
        self.widget.setCurrentIndex(Screen.COMMAND)

    def _get_mode_and_language(self):
        mode = self.settings.mode_dropdown.currentText()
        language = self.settings.lang_dropdown.currentText()
        if language == Language.ENGLISH.value:
            return mode, language
        return Mode.TRANSCRIPTION.value, language
