import os
from stat import *

if __name__ == "__main__":
    file1 = "input.txt"
    file2 = "/input.txt"

    # Verify the size of the files in the current working directory and the file system root
    if os.path.isfile(file1):
        print("Size of file1:", os.stat(file1).st_size)

    if os.path.isfile(file2):
        print("Size of file2:", os.stat(file2).st_size)
