import os


def create_directory(path):
    try:
        os.makedirs(path)
        return True
    except OSError as e:
        if e.errno == errno.EEXIST:
            return False
        else:
            raise
