import os


def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print("Size of file {} is {} bytes.".format(filename, size))
    except Exception as ex:
        print(ex)


if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
