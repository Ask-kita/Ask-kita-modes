import pyautogui
from pynput.mouse import Button, Controller
import time

class Executor:
    def __init__(self):
        self.previous_length = 0
        self.delay = None
        self.start = None
        pass

    def execute(self, dict):
        raise NotImplementedError("[Eexcutor] execute not implemented")


class TranscriptionExecutor(Executor):
    def __init__(self):
        super(TranscriptionExecutor, self).__init__()
        self.isExecuting = False
        self.mouse_is_pressed = False
        self.shift_is_pressed = False
        self.delay = 3

    def execute(self, dict):
        if self.isExecuting:
            self._execute(dict)

    def handle_mouse_press(self):
        if self.mouse_is_pressed and self.isExecuting:
            self.isExecuting = False
            self.shift_is_pressed = False
            self.mouse_is_pressed = False
            self.start = None
            self.previous_length = 0
        elif not self.isExecuting:
            self.start = time.time()
            self.mouse_is_pressed = True

    def handle_shift_press(self):
        if not self.shift_is_pressed and self.mouse_is_pressed:
            end = time.time()
            if end - self.start <= self.delay:
                self.isExecuting = True
                self.shift_is_pressed = True
            else:
                self.mouse_is_pressed = False



    def _execute(self, dict):
        pyautogui.press('backspace', presses=self.previous_length)
        if 'text' in dict:
            pyautogui.typewrite(dict['text'] + '\n')
            self.previous_length = 0
        else:
            pyautogui.typewrite(dict['partial'])
            self.previous_length = len(dict['partial'])


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
            print("CLICKING ...")
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
