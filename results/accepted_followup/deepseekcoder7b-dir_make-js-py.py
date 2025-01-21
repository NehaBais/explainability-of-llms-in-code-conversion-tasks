import os
import errno


def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e:
        # If the error was because the last folder didn't exist, return.
        if e.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else:
            raise
