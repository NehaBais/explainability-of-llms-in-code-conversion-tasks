import os


def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
    except OSError as error:
        print("Couldn't create directory", path, error)


# Usage
create_directory("./path/to/dir")
