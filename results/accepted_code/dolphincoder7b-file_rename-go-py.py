import os


def main():
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


if __name__ == "__main__":
    main()
