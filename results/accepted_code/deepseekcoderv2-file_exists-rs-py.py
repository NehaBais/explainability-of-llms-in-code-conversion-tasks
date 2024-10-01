import os

for file in ["input.txt", "docs", "/input.txt", "/docs"]:
    try:
        attr = os.stat(file)
        if stat.S_ISDIR(attr.st_mode):
            print(f"{file} is a directory")
        else:
            print(f"{file} is a file")
    except OSError as e:
        print(f"{file} does not exist")
