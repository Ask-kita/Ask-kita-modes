import sys
from PyQt5.QtWidgets import QApplication, QStackedWidget
from scripts.ask_kita import Ask_KITA
from scripts.view import HomeScreen, SettingsScreen, TranscriptionScreen, CommandScreen
from .constants import Screen
from scripts.constants import Mode, Language


class Controller:
    def __init__(self):
        self.app = QApplication(sys.argv)
        self.widget = QStackedWidget()
        self.widget.setWindowTitle("Ask-KITA")
        self.widget.setFixedWidth(1200)
        self.widget.setFixedHeight(800)
        self._add_screens_to_stacked_widget(self._get_all_screens())
        self.mode = None
        self.language = None

        self.kita = Ask_KITA()
        self.ask_kita_is_started = False
        self.ask_kita_is_paused = False

        self.corpus_file_path = None

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
        self.settings.upload.clicked.connect(self._upload_corpus)


        # transcription
        self.transcription.home.clicked.connect(self._goto_home)
        self.transcription.transcribe.clicked.connect(self._change_kita_state)

        # command
        self.command.home.clicked.connect(self._goto_home)
        self.command.start.clicked.connect(self._change_kita_state)

    def _change_kita_state(self):
        self.kita.set_mode_and_language(self.mode, self.language)
        self._change_thread_kita_state()
        self._change_button_state()

    def _change_button_state(self):
        if self.mode == Mode.TRANSCRIPTION.value:
            self._change_button_state_aux(self.transcription)
        elif self.mode == Mode.COMMAND.value:
            self._change_button_state_aux(self.command)

    def _change_button_state_aux(self, screen):
        if self.ask_kita_is_started:
            if self.ask_kita_is_paused:
                screen.change_button_to_transcribe()
            else:
                screen.change_button_to_stop()

    def _change_thread_kita_state(self):
        if self.ask_kita_is_started:
            if self.ask_kita_is_paused:
                print("RESUME KITA")
                self.kita.resume()
                self.ask_kita_is_paused = False
            else:
                self._pause_kita()
        else:
            print("START KITA")
            self.ask_kita_is_started = True
            self.kita.start()

    def _pause_kita(self):
        print("PAUSE KITA")
        if self.ask_kita_is_started and not self.ask_kita_is_paused:
            self.kita.pause()
            self.ask_kita_is_paused = True

    def _upload_corpus(self):
        corpus_file_path = self.settings.get_file_path()
        self.kita.update_vocab(corpus_file_path)

    def _goto_start(self):
        self.mode, self.language = self._set_mode_and_language()
        if self.mode == Mode.TRANSCRIPTION.value:
            self._goto_transcription()
        elif self.mode == Mode.COMMAND.value:
            self._goto_command()
        else:
            raise NotImplementedError("[Controller] Command not found")

    def _goto_home(self):
        self._pause_kita()
        self._change_button_state()
        self.widget.setCurrentIndex(Screen.HOME)

    def _goto_transcription(self):
        self.widget.setCurrentIndex(Screen.TRANSCRIPTION)

    def _goto_settings(self):
        self.widget.setCurrentIndex(Screen.SETTINGS)

    def _goto_command(self):
        self.widget.setCurrentIndex(Screen.COMMAND)

    def _set_mode_and_language(self):
        mode = self.settings.mode_dropdown.currentText()
        language = self.settings.lang_dropdown.currentText()
        if language == Language.ENGLISH.value:
            return mode, language
        return Mode.TRANSCRIPTION.value, language
