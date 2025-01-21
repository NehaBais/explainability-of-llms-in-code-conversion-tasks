import os


def check_file(path):
    return os.path.isfile(path)


def check_directory(path):
    return os.path.isdir(path)


if __name__ == "__main__":
    print("input.txt is a regular file? ", end="")
    if check_file("input.txt"):
        print("yes")
    else:
        print("no")

    print("\ndocs is a directory? ", end="")
    if check_directory("docs"):
        print("yes")
    else:
        print("no")

    print("\n/input.txt is a regular file? ", end="")
    if check_file("/input.txt"):
        print("yes")
    else:
        print("no")

    print("\n/docs is a directory? ", end="")
    if check_directory("/docs"):
        print("yes")
    else:
        print("no")
