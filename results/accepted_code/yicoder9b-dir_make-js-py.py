import os
import errno
import shutil


def mkdirp(p):
    try:
        # Try to make the directory, it will succeed if it already exists or is created.
        os.makedirs(p)
    except OSError as e:
        # If the error was caused because the directory exists, ignore it.
        if e.errno == errno.EEXIST and os.path.isdir(p):
            pass
        else:  # In any other case re-raise the error.
            raise
