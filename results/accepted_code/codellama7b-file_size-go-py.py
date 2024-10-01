import os


def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except OSError as err:
        print(err)


if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
