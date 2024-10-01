import os
import stat
from pathlib import Path


def create_directory(path):
    # Create a directory and any missing parents.
    # This task is named after the posix mkdir -p command, and several libraries which implement the same behavior.
    try:
        Path(path).mkdir(parents=True, exist_ok=True)
    except OSError as e:
        print("Couldn't create directory {}: {}".format(path, e))
        return False
    return True
