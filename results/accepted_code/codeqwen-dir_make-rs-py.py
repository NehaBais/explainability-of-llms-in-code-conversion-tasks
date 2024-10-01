import os


def create_directory(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != errno.EEXIST:
            raise


# Example usage:
create_directory("./path/to/dir")
