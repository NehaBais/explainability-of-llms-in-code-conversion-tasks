import os


def main():
    # rename "input.txt" into "output.txt" and "docs" into "mydocs" in current working directory
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # rename "/input.txt" into "/output.txt" and "/docs" into "/mydocs" in filesystem root
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


if __name__ == "__main__":
    main()
