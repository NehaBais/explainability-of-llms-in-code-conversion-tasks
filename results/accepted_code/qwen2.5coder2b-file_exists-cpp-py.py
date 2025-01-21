import os


def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" is a directory")
        else:
            print(f" exists with a file size of {os.path.getsize(path)} bytes.")
    else:
        print(" does not exist")


if __name__ == "__main__":
    file_exists("input.txt")
    file_exists("zero_length.txt")
    file_exists("docs/input.txt")
    file_exists("docs/zero_length.txt")
