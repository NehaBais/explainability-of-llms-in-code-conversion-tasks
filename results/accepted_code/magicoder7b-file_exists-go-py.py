import os, stat


def print_stat(p):
    if not os.path.exists(p):
        print(f"{p} does not exist.")
    else:
        mode = os.stat(p)[stat.ST_MODE]
        if stat.S_ISDIR(mode):
            print(f"{p} is a directory")
        elif stat.S_ISREG(mode):
            print(f"{p} is a file")
        else:
            print(f"{p} is not a regular file or directory.")


if __name__ == "__main__":
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")
