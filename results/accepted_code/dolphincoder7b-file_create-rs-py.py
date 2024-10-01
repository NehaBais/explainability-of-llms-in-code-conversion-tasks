import os
from pathlib import Path

FILE_NAME = "output.txt"
DIR_NAME = "docs"


def create(root):
    f_path = root / FILE_NAME
    d_path = root / DIR_NAME

    try:
        os.makedirs(d_path)
        with open(f_path, "w"):
            pass
    except Exception as e:
        print("Error:", str(e))
        return False
    else:
        return True


def main():
    create(".") and create("/")


if __name__ == "__main__":
    main()
