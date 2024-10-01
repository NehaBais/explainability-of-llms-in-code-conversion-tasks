import os
from pathlib import Path


def create_empty_file_and_directory(path):
    # Create an empty file
    with open(os.path.join(path, "output.txt"), "w") as f:
        pass

    # Create an empty directory
    try:
        os.mkdir(os.path.join(path, "docs"))
    except OSError as error:
        print(error)


# Run twice - once in the current working directory and once at the filesystem root
create_empty_file_and_directory(".")
create_empty_file_and_directory("/")
