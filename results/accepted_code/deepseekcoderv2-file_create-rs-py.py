import os
import sys

FILE_NAME = "output.txt"
DIR_NAME = "docs"


def create(root):
    f_path = os.path.join(root, FILE_NAME)
    d_path = os.path.join(root, DIR_NAME)
    if not os.path.exists(d_path):
        os.makedirs(d_path)
    with open(f_path, "w") as f:
        pass  # Create an empty file of size 0 bytes


def error_handler(error, code):
    print(f"Error: {error}", file=sys.stderr)
    sys.exit(code)


def main():
    create(".")
    create("/")


if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        error_handler(e, 1)
