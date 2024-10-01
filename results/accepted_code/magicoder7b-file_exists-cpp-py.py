import os


def file_exists(file_name):
    if not os.path.exists(file_name):
        print(f"{file_name} does not exist")
    else:
        print(f"{file_name} exists.")
        if os.path.isdir(file_name):
            print(f"{file_name} is a directory.")
        elif os.path.isfile(file_name):
            size = os.path.getsize(file_name)
            print(f"{file_name} exists with a file size of {size} bytes.")


# Checks for the same file and directory in the filesystem root as well.
os.chdir("/")
print("Current Directory - Root: ")
file_exists("/input.txt")
file_exists("/docs/input.txt")
