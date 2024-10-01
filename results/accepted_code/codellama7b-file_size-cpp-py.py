import pathlib


def print_file_size(filename):
    if pathlib.Path(filename).exists():
        size = pathlib.Path(filename).stat().st_size
        print("Size of file", filename, "is", size, "bytes")
    else:
        print("File does not exist")


if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
