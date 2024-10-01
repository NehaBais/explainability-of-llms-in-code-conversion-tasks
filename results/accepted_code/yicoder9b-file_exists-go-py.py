import os


def print_stat(p):
    try:
        if os.path.isdir(p):
            print(f"{p} is a directory")
        elif os.path.isfile(p):
            print(f"{p} is a file")
    except Exception as e:
        print(e)


def main():
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")


if __name__ == "__main__":
    main()
