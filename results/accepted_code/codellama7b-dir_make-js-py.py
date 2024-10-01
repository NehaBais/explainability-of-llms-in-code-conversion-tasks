import os


def mkdirp(path):
    try:
        os.makedirs(path)
    except FileExistsError:
        pass
    except OSError as e:
        if e.errno != errno.ENOENT:
            raise
