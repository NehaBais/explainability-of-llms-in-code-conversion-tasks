import os


def get_file_size(filename):
    return os.path.getsize(filename)


print(get_file_size("input.txt"))
print(get_file_size("/input.txt"))
