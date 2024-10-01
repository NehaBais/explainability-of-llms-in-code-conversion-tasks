import os


def print_file_size(f):
    try:
        statinfo = os.stat(f)
        print(statinfo.st_size)
    except Exception as e:
        print(e)


if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size(
        "/"
    )  # This will print the size of root directory in some systems, may not work on Windows
