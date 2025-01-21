import os


def main():
    # In the current working directory
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # In the filesystem root (assuming you have the necessary permissions)
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


if __name__ == "__main__":
    main()
