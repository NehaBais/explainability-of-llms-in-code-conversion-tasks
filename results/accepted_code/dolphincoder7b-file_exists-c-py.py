import os


def check_reg(path):
    return os.path.isfile(path)


def check_dir(path):
    return os.path.isdir(path)


print(
    "input.txt is a regular file? {}".format("yes" if check_reg("input.txt") else "no")
)
print("docs is a directory? {}".format("yes" if check_dir("docs") else "no"))
print(
    "/input.txt is a regular file? {}".format(
        "yes" if check_reg("/input.txt") else "no"
    )
)
print("/docs is a directory? {}".format("yes" if check_dir("/docs") else "no"))
