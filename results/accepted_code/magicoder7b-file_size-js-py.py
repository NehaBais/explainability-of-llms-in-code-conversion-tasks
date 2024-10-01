import os


def file_size(path):
    return os.stat(path).st_size


print("Size of input.txt in current directory: ", file_size("input.txt"))
print(
    "Size of input.txt in root directory: ", file_size("/input.txt")
)  # note the use of absolute path here
