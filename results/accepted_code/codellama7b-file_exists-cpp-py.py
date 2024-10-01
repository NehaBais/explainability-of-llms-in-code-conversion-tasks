import os


def file_exists(path):
    if os.path.exists(path):
        if os.path.isdir(path):
            print(f"{path} is a directory")
        else:
            size = os.path.getsize(path)
            print(f"{path} exists with a file size of {size} bytes.")
    else:
        print(f"{path} does not exist")


if __name__ == "__main__":
    file_exists("input.txt")
    file_exists("zero_length.txt")
    file_exists("docs/input.txt")
    file_exists("docs/zero_length.txt")
