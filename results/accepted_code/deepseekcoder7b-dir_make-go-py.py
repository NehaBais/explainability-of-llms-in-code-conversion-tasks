import os


def make_directory(path):
    try:
        os.makedirs(
            path, exist_ok=True
        )  # exist_ok = True will prevent an exception if the directory already exists
    except Exception as e:
        print("Error creating directory: ", e)


make_directory("/tmp/some/path/to/dir")
