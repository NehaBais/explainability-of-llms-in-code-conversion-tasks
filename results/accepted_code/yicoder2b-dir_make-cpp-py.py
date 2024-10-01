import os


def mkdir(path):
    try:
        os.makedirs(path)
        return 0  # success code
    except OSError as e:
        print("couldn't create directory:", path)
        return -1  # failure code
