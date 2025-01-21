import os


def rename_files():
    # Rename files in the current working directory
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # Rename files in the root directory
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


if __name__ == "__main__":
    rename_files()
