import os


def print_file_size(f):
    try:
        stat = os.stat(f)
        size = stat.st_size
        print(f"Size of {f}: {size} bytes")
    except Exception as e:
        print(f"Error getting file size for {f}: {e}")


if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
