import sys
import os
from PyQt5.uic import loadUi
from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QDialog, QApplication, QWidget, QStackedWidget
from ask_kita import start_ask_kita_process


HOME_SCREEN = os.path.join('screens', 'home.ui')
TRANSCRIPTION_SCREEN = os.path.join('screens', 'transcription.ui')

class HomeScreen(QDialog):
    def __init__(self, widget):
        super(HomeScreen, self).__init__()
        self.stackedWidget = widget
        loadUi(HOME_SCREEN, self)
        self.start.clicked.connect(self.gotoTranscriptionScreen)

    def gotoTranscriptionScreen(self):
        transcription = TranscriptionScreen()
        self.stackedWidget.addWidget(transcription)
        self.stackedWidget.setCurrentIndex(self.stackedWidget.currentIndex() + 1)
        # process = start_ask_kita_process(stop_word="kita")


class TranscriptionScreen(QDialog):
    def __init__(self):
        super(TranscriptionScreen, self).__init__()
        loadUi(TRANSCRIPTION_SCREEN, self)

    # def gotologin(self):
    #     print("hello")

def showGui():
    app = QApplication(sys.argv)
    widget = QStackedWidget()
    home = HomeScreen(widget)
    widget.addWidget(home)
    widget.setFixedWidth(1200)
    widget.setFixedHeight(800)
    widget.show()
    try:
        sys.exit(app.exec_())
    except:
        print("exiting")


# showGui()