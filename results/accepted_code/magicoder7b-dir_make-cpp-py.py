import os


def make_dirs(path):
    try:
        os.makedirs(path)
        return True
    except OSError as error:
        if error.errno != errno.EEXIST:
            print("Couldn't create directory:", path)
            return False
        else:
            return True
