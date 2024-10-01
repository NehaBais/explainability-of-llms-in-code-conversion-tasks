import os
import errno

file_name = "output.txt"
dir_name = "docs"


def create(root):
    try:
        os.makedirs(os.path.join(root, dir_name))
        with open(os.path.join(root, file_name), "w"):
            pass
    except OSError as e:
        if e.errno != errno.EEXIST:
            raise


def main():
    create(".")
    create("/")


if __name__ == "__main__":
    main()
