import os
from pathlib import Path


def check_file_and_directory(path):
    file_path = Path(path, "docs/input.txt")
    directory_path = Path(path, "/docs")

    exists_in_current = file_path.exists() and directory_path.exists()
    print(f"File {file_path} and directory {directory_path} exist: {exists_in_current}")


# Check for the current working directory
check_file_and_directory(".")

# Check for the filesystem root (assuming '/' is the root)
check_file_and_directory("/")
