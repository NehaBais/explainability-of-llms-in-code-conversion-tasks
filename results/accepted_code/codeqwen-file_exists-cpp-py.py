import os


def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" Is a directory")
        else:
            print(" exists with a file size of ", os.path.getsize(path), " bytes.")
    else:
        print(" does not exist")


file_exists("input.txt")
file_exists(
    "/zero_length.txt"
)  # if you want to check the root directory, you need to provide an absolute path
file_exists("/docs/input.txt")
file_exists("/docs/zero_length.txt")
