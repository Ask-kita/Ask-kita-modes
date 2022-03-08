from enum import Enum


class Mode(Enum):
    TRANSCRIPTION = "Transcription"
    COMMAND = "Command"


class Language(Enum):
    ENGLISH = 'English'
    FRENCH = 'French'
