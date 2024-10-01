import os


def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno == 17:  # File exists
            return
        elif e.errno == 2:  # No such file or directory
            parent_dir = os.path.dirname(path)
            mkdirp(parent_dir)
            mkdirp(path)
        else:
            raise
