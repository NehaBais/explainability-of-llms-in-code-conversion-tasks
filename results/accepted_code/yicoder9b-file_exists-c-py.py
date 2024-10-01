import os


# Check if a path exists and is a regular file
def check_reg(path):
    return os.path.isfile(path)


# Check if a path exists and is a directory
def check_dir(path):
    return os.path.isdir(path)


if __name__ == "__main__":
    print(
        "input.txt is a regular file? {}".format(
            "yes" if check_reg("input.txt") else "no"
        )
    )
    print("docs is a directory? {}".format("yes" if check_dir("docs") else "no"))
    print(
        "/input.txt is a regular file? {}".format(
            "yes" if check_reg("/input.txt") else "no"
        )
    )
    print("/docs is a directory? {}".format("yes" if check_dir("/docs") else "no"))
