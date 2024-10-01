import os


def mkdirp(path):
    try:
        os.makedirs(path)
    except FileExistsError:  # If the directory already exists, do nothing
        pass
