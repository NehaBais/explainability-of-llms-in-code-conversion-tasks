import os
import errno


def printStat(p):
    try:
        if os.path.isdir(p):  # If the path is a directory
            print(f"{p} is a directory")
        else:  # If it's a file
            print(f"{p} is a file")
    except OSError as e:
        if e.errno == errno.ENOENT:  # if the path doesn't exist
            print(f"Path {p} does not exist")
        else:
            print(e)


def main():
    # Check current working directory
    printStat("input.txt")
    printStat("docs")

    # Check filesystem root
    printStat("/input.txt")
    printStat("/docs")


main()
