import os
from pathlib import Path


def print_file_size(file):
    stat = os.stat(file)
    file_size = stat.st_size
    return file_size


def main():
    input_path = Path(__file__).parent / "input.txt"
    root_path = Path("/") / "input.txt"

    print(print_file_size(str(input_path)))
    print(print_file_size(str(root_path)))
