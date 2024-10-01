import os


def print_file_size(file):
    try:
        stat_info = os.stat(file)
        print(stat_info.st_size)
    except Exception as e:
        print(e)


print_file_size("input.txt")
print_file_size("/input.txt")
