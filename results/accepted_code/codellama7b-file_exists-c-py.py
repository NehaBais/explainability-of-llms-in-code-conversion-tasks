import os


# Check for regular file.
def check_reg(path):
    return os.path.isfile(path)


# Check for directory.
def check_dir(path):
    return os.path.isdir(path)


if __name__ == "__main__":
    print("input.txt is a regular file?", check_reg("input.txt"))
    print("docs is a directory?", check_dir("docs"))
    print("/input.txt is a regular file?", check_reg("/input.txt"))
    print("/docs is a directory?", check_dir("/docs"))
