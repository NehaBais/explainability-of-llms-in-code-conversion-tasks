import os
import stat


def get_file_size(filename):
    try:
        return os.path.getsize(filename)
    except FileNotFoundError:
        print("File not found")
        return -1  # Return -1 to indicate file does not exist.


print(get_file_size("input.txt"))
print(get_file_size("/input.txt"))
