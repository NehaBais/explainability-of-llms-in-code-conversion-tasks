import os
from pathlib import Path


def print_stat(p):
    try:
        i = os.stat(p)
        if os.path.isdir(p):
            print(f"{p} is a directory")
        else:
            print(f"{p} is a file")
    except FileNotFoundError as e:
        print(e)


if __name__ == "__main__":
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")
