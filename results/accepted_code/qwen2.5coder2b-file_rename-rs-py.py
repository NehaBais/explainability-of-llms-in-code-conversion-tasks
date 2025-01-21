import os


def main():
    err = "File move error"

    # Moving files in the current directory
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # Moving files at the root level
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


if __name__ == "__main__":
    main()
