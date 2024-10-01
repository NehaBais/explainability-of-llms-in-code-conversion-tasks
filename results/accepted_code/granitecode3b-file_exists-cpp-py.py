import os
import shutil
from pathlib import Path


def file_exists(path):
    if os.path.exists(path):
        if os.path.isdir(path):
            print(f"{path} is a directory")
        else:
            print(f"{path} exists with a file size of {shutil.sizeof(path)} bytes.")
    else:
        print(f"{path} does not exist")


file_exists("input.txt")
file_exists("zero_length.txt")
file_exists(Path("/input.txt").resolve())
file_exists(Path("/zero_length.txt").resolve())
