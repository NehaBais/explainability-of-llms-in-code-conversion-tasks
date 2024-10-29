import os
import shutil


def rename_files():
    # Rename here, i.e., in the current working directory
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # Rename in filesystem root
    shutil.move("/input.txt", "/output.txt")
    shutil.move("/docs", "/mydocs")


if __name__ == "__main__":
    rename_files()
