import tempfile


def create_temp_file(str):
    fp = tempfile.NamedTemporaryFile(mode='w', delete=False)
    path = fp.name
    fp.write(str)
    fp.close()
    return path
