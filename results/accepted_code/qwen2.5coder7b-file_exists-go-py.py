import os


def print_stat(p):
    if not os.path.exists(p):
        print(f"{p} does not exist.")
    elif os.path.isfile(p):
        print(f"{p} is a file.")
    elif os.path.isdir(p):
        print(f"{p} is a directory.")


print_stat("input.txt")
print_stat("/input.txt")
print_stat("docs")
print_stat("/docs")
