import os


def print_stat(path):
    if not os.path.exists(path):
        print(f"{path} does not exist")
        return

    stat_info = os.stat(path)

    if stat_info.is_dir():
        print(f"{path} is a directory")
    else:
        print(f"{path} is a file")


print_stat("input.txt")
print_stat("/input.txt")
print_stat("docs")
print_stat("/docs")
