import os
import errno


def create(root):
    file_name = os.path.join(root, "output.txt")
    dir_name = os.path.join(root, "docs")

    try:
        os.mkdir(dir_name)
        with open(file_name, "w") as f:
            pass
    except OSError as e:
        # If the error was caused because the directory already existed, ignore it
        if e.errno == errno.EEXIST:
            pass
        else:
            raise


try:
    create(".")
    create("/")
except Exception as e:
    print("Error:", str(e))
