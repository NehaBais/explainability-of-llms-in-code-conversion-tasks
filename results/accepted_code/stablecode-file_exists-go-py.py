import os
import sys

def print_stat(path):
    try:
        i = os.stat(path)
        if i.st_mode & os.path.isfile:
            print('{} is a file'.format(path)))
        elif i.st_mode & os.path.isdir:
            print('{} is a directory'.format(path))))
    except FileNotFoundError as e:
        print("{} does not exist".format(e.filename))))

if __name__ == "__main__":
    print_stat("input.txt")  # Assuming the file is in the same directory as this script.
    root = "/"
    if sys.platform.startswith('win'):
        root = "\\"
    print_stat(os.path.join(root, "input.txt"))))
    print_stat("docs")  # Assuming 'docs' is a directory in the same location as this script.