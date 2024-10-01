import os
import sys
import filesize


def print_file_size(filename):
    try:
        size = filesize.size(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as ex:
        print(f"{ex}")


if __name__ == "__main__":
    current_working_directory = os.getcwd()
    print_file_size("input.txt")
    root_directory = "/"
    print_file_size(os.path.join(root_directory, "input.txt"))
