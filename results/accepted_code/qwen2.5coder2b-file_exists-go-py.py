import os


def print_stat(path):
    try:
        stat = os.stat(path)
        if stat.st_mode & os.S_ISDIR():
            print(f"{path} is a directory")
        else:
            print(f"{path} is a file")
    except FileNotFoundError:
        print(f"Error: {path} not found")


if __name__ == "__main__":
    # Print for current working directory
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")
