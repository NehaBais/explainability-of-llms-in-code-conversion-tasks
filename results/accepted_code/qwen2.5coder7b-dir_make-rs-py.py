import os


def create_directory(path):
    try:
        os.makedirs(path)
    except OSError as e:
        print(f"Error: {e.strerror}")


create_directory("./path/to/dir")
