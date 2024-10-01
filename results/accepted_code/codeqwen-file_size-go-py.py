import os


def print_file_size(f):
    if os.path.exists(f):
        stat = os.stat(f)
        print(stat.st_size)
    else:
        print(f"File {f} does not exist.")


if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
