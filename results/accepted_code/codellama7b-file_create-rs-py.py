import os
import errno

FILE_NAME = "output.txt"
DIR_NAME = "docs"


def main():
    # Create a new empty file and directory in the current working directory
    create(".")

    # Create a new empty file and directory in the root of the filesystem
    create("/")


def create(root):
    # Join the root directory with the FILE_NAME constant
    f_path = os.path.join(root, FILE_NAME)

    # Join the root directory with the DIR_NAME constant
    d_path = os.path.join(root, DIR_NAME)

    # Create the directory using the DirBuilder class
    try:
        dir = os.path.dirname(d_path)
        if not os.path.exists(dir):
            os.makedirs(dir)
        with open(f_path, "w"):
            pass
    except OSError as e:
        if e.errno != errno.EEXIST:
            raise


if __name__ == "__main__":
    main()
