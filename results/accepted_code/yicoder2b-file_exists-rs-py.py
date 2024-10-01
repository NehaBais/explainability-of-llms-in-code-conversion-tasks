import os


def check_files(file1, file2):
    for file in [file1, file2]:
        if os.path.exists(file):
            print(f"{file} exists")
            if os.path.isdir(file):
                print(f"{file} is a directory")
            else:
                print(f"{file} is a file")
        else:
            print(f"{file} does not exist")


# Invoke the function for current working dir and root
check_files("input.txt", "docs")
