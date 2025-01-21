import os


def main():
    try:
        # Check the size of input.txt in the current working directory
        stat_info = os.stat("input.txt")
        print(stat_info.st_size)

        # Check the size of /input.txt (should be equivalent to checking '/input.txt' on Unix-like systems)
        stat_info = os.stat("/input.txt")
        print(stat_info.st_size)
    except FileNotFoundError:
        print("File not found")


if __name__ == "__main__":
    main()
