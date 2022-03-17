import tempfile
from enum import IntEnum

def create_temp_file(str):
    fp = tempfile.NamedTemporaryFile(mode='w', delete=False)
    path = fp.name
    fp.write(str)
    fp.close()
    return path

class Screen(IntEnum):
    HOME = 0
    SETTINGS = 1
    TRANSCRIPTION = 2
    COMMAND = 3