import os
from pathlib import Path


def main():
    file_name = sys.argv[1] if len(sys.argv) > 1 else exit("No file name supplied", 2)
    metadata = os.stat(file_name)

    print("Size of file.txt is {} bytes".format(metadata.st_size))


def exit(msg, code):
    sys.stderr.write("Error: " + msg + "\n")
    sys.exit(code)
