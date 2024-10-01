import os


def main():
    try:
        stats = os.stat("input.txt")
        print(f"{stats.st_size}")
        stats = os.stat("/input.txt")
        print(f"{stats.st_size}")
    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
