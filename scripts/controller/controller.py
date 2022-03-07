import sys
from PyQt5.QtWidgets import QApplication, QStackedWidget

from scripts.view import HomeScreen
from scripts.view import SettingsScreen
from .constants import Screen, Mode


class Controller:
    def __init__(self):
        self.app = QApplication(sys.argv)
        self.widget = QStackedWidget()
        self.widget.setWindowTitle("Ask-KITA")
        self.widget.setFixedWidth(1200)
        self.widget.setFixedHeight(800)
        self.add_screens_to_stacked_widget(self.get_all_screens())

    def add_screens_to_stacked_widget(self, screens):
        for screen in screens:
            self.widget.addWidget(screen)

    def get_all_screens(self):
        self.home = HomeScreen()
        self.settings = SettingsScreen()
        self.get_add_event_handlers()
        return [self.home, self.settings]

    def get_add_event_handlers(self):
        # home
        self.home.settings.clicked.connect(self.goto_settings)
        self.home.start.clicked.connect(self.goto_start)

        # settings
        self.settings.home.clicked.connect(self.goto_home)

    def goto_settings(self):
        print("going to settings")
        self.widget.setCurrentIndex(Screen.SETTINGS)

    def goto_start(self):
        mode = self.settings.mode_dropdown.currentText()
        if mode == Mode.TRANSCRIPTION.value:
            print("transcribing")
        elif mode == Mode.COMMAND.value:
            print("command mode")
        else:
            print(mode, "HUH???")

    def goto_home(self):
        print("going home")
        self.widget.setCurrentIndex(Screen.HOME)


    def run(self):
        self.widget.setCurrentIndex(Screen.HOME)
        self.widget.show()
        try:
            sys.exit(self.app.exec_())
        except:
            print("exiting")
