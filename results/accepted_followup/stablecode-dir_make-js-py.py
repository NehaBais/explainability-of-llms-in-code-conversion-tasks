import os
from pathlib import Path

def create_directory(path, cb=None):
    path = str(Path(path).resolve()))

    try:
        os.makedirs(path)
        return True if cb else None
    except OSError as error:
        if error.errno == errno.EEXIST:
            return False if cb else None
        else:
            raise Exception('Failed to create directory.') from error