import sys
from PyQt5.QtWidgets import QApplication, QStackedWidget

from scripts.view import HomeScreen


class Controller:
    def __init__(self):
        pass

    def run(self):
        app = QApplication(sys.argv)
        widget = QStackedWidget()
        widget.setWindowTitle("Ask-KITA")
        home = HomeScreen(widget)
        widget.addWidget(home)
        widget.setFixedWidth(1200)
        widget.setFixedHeight(800)
        widget.show()
        try:
            sys.exit(app.exec_())
        except:
            print("exiting")
