import os

for file in ["input.txt", "docs", "/input.txt", "/docs"]:
    try:
        if os.path.isdir(file):
            print(f"{file} is a directory")
        elif os.path.isfile(file):
            print(f"{file} is a file")
    except FileNotFoundError:
        print(f"{file} does not exist")
