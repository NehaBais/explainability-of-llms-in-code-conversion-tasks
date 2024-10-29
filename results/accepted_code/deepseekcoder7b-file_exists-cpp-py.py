import os


def file_exists(path):
    print(path)

    if os.path.exists(path):
        if os.path.isdir(path):
            print(" is a directory")
        else:
            print(" exists with a file size of", os.path.getsize(path), "bytes.")
    else:
        print(" does not exist")


# Run the function for current working directory and root filesystem
file_exists("input.txt")
file_exists("/input.txt")  # For the root filesystem
