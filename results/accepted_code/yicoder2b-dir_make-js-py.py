import os


def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e1:
        if not os.path.isfile(
            path
        ):  # if directory is still being created by another process
            raise
        else:  # the path exists and it's a file, this means that the parent directory was successfully created
            return True
    return False
