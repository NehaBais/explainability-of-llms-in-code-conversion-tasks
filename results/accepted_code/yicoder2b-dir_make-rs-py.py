import os


def create_directory(*paths):
    for path in paths:
        if not os.path.exists(path):
            os.makedirs(path)
        else:
            print(f"Directory {path} already exists")


create_directory("./path", "./path/to", "./path/to/dir")
