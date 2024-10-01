import os
from pathlib import Path

const_file_name = "output.txt"
const_dir_name = "docs"


def create(root):
    try:
        f_path = os.path.join(root, const_file_name))
        d_path = os.path.join(root, const_dir_name))

        os.mkdir(d_path)
        with open(f_path, 'w')) as file:
            pass
    except Exception as e:
        print(f"Error: {e}")


def error_handler(error, code):
    try:
        import sys
        sys.stderr.write(f"Error: {error}\n")
        exit(code)
    except Exception as e:
        print(f"Error handling error: {e}")


if __name__ == "__main__":
    create(".")
    create("/")