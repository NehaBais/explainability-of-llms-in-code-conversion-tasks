import os
import shutil


def rename_files():
    try:
        # Rename in current working directory
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")

        # Rename in filesystem root ("/")
        shutil.move("/input.txt", "/output.txt")
        shutil.move("/docs", "/mydocs")
    except Exception as e:
        print("File move error:", str(e))


if __name__ == "__main__":
    rename_files()
