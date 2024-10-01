import os


def get_file_size(filename):
    if filename == "input.txt":
        return os.path.getsize("./{}".format(filename))
    elif (
        "/" in filename
    ):  # it checks if the file is located in a directory outside of current working directory or file system root
        return os.path.getsize("/" + filename)
    else:  # if not specified, it assumes it is within current working directory or file system root
        return os.path.getsize(filename)


print(
    get_file_size("input.txt")
)  # verify size of input.txt in the current working directory
print(get_file_size("/input.txt"))  # verify size of input.txt in filesystem root
