import os


def create_file(path):
    try:
        with open(path, "w"):
            pass  # This creates an empty file of size 0 bytes.
    except Exception as e:
        print(e)


def create_directory(path):
    try:
        os.mkdir(path)  # This creates an empty directory.
    except Exception as e:
        print(e)


# Here
create_file("output.txt")
create_directory("docs")

# And in the filesystem root
create_file("/output.txt")
create_directory("/docs")
