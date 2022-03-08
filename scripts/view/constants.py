import os

SCREEN_PATH = os.path.abspath(os.path.join(os.path.dirname(os.path.realpath(__file__)), "../../screens"))

HOME_SCREEN_PATH = os.path.join(SCREEN_PATH, 'home.ui')
SETTINGS_SCREEN_PATH = os.path.join(SCREEN_PATH, 'settings.ui')
TRANSCRIPTION_SCREEN_PATH = os.path.join(SCREEN_PATH, 'transcription.ui')
COMMAND_SCREEN_PATH = os.path.join(SCREEN_PATH, 'command.ui')