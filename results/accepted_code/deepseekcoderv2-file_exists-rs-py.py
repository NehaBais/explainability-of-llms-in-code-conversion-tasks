import os


def check_file_or_directory(path):
    if os.path.exists(path):
        if os.path.isdir(path):
            print(f"{path} is a directory")
        else:
            print(f"{path} is a file")
    else:
        print(f"{path} does not exist")


for path in ["input.txt", "docs", "/input.txt", "/docs"]:
    check_file_or_directory(path)
