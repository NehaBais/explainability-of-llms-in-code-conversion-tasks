import os


# Check if path is a regular file
def check_reg(path):
    return os.path.isfile(path)


# Check if path is a directory
def check_dir(path):
    return os.path.isdir(path)


def main():
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


if __name__ == "__main__":
    main()
