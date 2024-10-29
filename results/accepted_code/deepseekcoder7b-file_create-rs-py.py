import os
import sys

FILE_NAME = "output.txt"
DIR_NAME = "docs"


def create(root):
    f_path = os.path.join(root, FILE_NAME)
    d_path = os.path.join(root, DIR_NAME)

    if not os.path.exists(d_path):
        os.makedirs(d_path)

    if not os.path.isfile(f_path):
        open(f_path, "w").close()


def error_handler(error, code):
    print(f"Error: {str(error)}", file=sys.stderr)
    sys.exit(code)


try:
    create(".")
    create("/")
except Exception as e:
    error_handler(e, 1)
