import os


def mkdir_p(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != os.errno.EEXIST or not os.path.isdir(path):
            raise
