import os


def print_file_size(f):
    if stat := os.stat(f):
        print(stat.st_size)
    else:
        print("Error:", os.strerror(os.errno))


print_file_size("input.txt")
print_file_size("/input.txt")
