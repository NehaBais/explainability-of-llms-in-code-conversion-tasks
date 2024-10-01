import os


def create_dir_all(path):
    try:
        os.makedirs(path)
    except OSError as error:
        if error.errno != errno.EEXIST:
            raise


create_dir_all("./path/to/dir")
