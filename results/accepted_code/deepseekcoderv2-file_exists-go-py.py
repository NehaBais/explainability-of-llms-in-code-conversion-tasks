import os


def check_existence(path):
    if os.path.exists(path):
        print(f"{path} exists")
    else:
        print(f"{path} does not exist")


# Check for current working directory and filesystem root
check_existence("input.txt")
check_existence("/input.txt")
check_existence("docs")
check_existence("/docs")
