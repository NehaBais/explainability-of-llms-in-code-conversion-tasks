import os
import errno


def create_dir_all(path):
    try:
        os.makedirs(path, exist_ok=True)
    except OSError as e:
        # If the error was caused because the path already existed, ignore.
        if e.errno == errno.EEXIST:
            pass
        else:  # raise if there's a different error
            raise
