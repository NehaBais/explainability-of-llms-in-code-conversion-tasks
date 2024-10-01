import os


def print_file_size(file_path):
    file_info = os.stat(file_path)
    print("{:,} B".format(file_info.st_size))


print_file_size("file.txt")  # For a file in the current working directory
print_file_size("/file.txt")  # For a file in the root of the filesystem
