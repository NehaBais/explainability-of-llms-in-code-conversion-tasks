import os


def print_stat(p):
    if not (os.path.exists(p)):
        print("Path does not exist")
    elif os.path.isdir(p):
        print(f"{p} is a directory")
    else:
        print(f"{p} is a file")


def main():
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")


if __name__ == "__main__":
    main()
