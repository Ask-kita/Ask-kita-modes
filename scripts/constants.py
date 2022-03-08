from enum import Enum


# class Screen(Enum):
#     HOME = 0
#     SETTINGS = 1
#     TRANSCRIPTION = 2
#     COMMAND = 3

class Mode(Enum):
    TRANSCRIPTION = "Transcription"
    COMMAND = "Command"


class Language(Enum):
    ENGLISH = 'English'
    FRENCH = 'French'
