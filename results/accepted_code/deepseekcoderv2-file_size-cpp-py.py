import os


def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as ex:
        print(str(ex))


print_file_size("input.txt")
print_file_size("/input.txt")
