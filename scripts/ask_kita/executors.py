import pyautogui
from pynput.mouse import Button, Controller
import time


class Executor:
    def __init__(self):
        self.previous_length = 0
        pass

    def execute(self, dict):
        raise NotImplementedError("[Eexcutor] execute not implemented")


class TranscriptionExecutor(Executor):
    def __init__(self):
        super(TranscriptionExecutor, self).__init__()

    def execute(self, dict):
        if 'text' in dict:
            pyautogui.typewrite(dict['text'] + '\n')


class CommandExecutor(Executor):
    def __init__(self):
        super(CommandExecutor, self).__init__()
        self.mouse = Controller()
        self.start = time.time()
        self.delay = 1

    def execute(self, dict):
        end = time.time()
        if end - self.start >= self.delay:
            (_, command), = dict.items()
            self._execute(command)
            self.start = time.time()

    def _execute(self, command):
        if command in 'click' or command in 'right click':
            self.mouse.click(Button.left, 1)
        elif command in 'double click':
            self.mouse.click(Button.left, 2)
        elif command in 'enter':
            pyautogui.press('enter')
        elif command in 'function one key':
            pyautogui.press('f1')
        elif 'control shift f' in command:
            pyautogui.hotkey('ctrl', 'shift', 'f')
        elif command in 'alt key equal':
            with pyautogui.hold('alt'):
                pyautogui.press(['='])
        elif command in 'save':
            pyautogui.hotkey('ctrl', 's')
