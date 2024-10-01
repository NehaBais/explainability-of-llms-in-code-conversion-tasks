import os
import stat


def get_file_size(f):
    try:
        return os.stat(f).st_size
    except FileNotFoundError:
        print("File not found")


print(get_file_size("input.txt"))
print(get_file_size("/input.txt"))
