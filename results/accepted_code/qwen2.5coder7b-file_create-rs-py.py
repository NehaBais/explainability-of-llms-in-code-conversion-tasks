import os
import sys

FILE_NAME = "output.txt"
DIR_NAME = "docs"


def create(root):
    f_path = os.path.join(root, FILE_NAME)
    d_path = os.path.join(root, DIR_NAME)

    try:
        # Create the directory if it doesn't exist
        os.makedirs(d_path, exist_ok=True)

        # Create an empty file
        with open(f_path, "w") as file:
            pass

        print(f"Created files and directories in {root}")
    except Exception as e:
        error_handler(e)


def error_handler(error):
    print(f"Error: {error}", file=sys.stderr)
    sys.exit(1)


if __name__ == "__main__":
    create(".")
    try:
        # Check if root directory is accessible
        import tempfile

        with tempfile.TemporaryDirectory() as temp_dir:
            root = os.path.join("/", temp_dir)
            create(root)
    except PermissionError:
        print("Permission denied to access the filesystem root.")
