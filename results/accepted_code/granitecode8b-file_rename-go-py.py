import os


def rename_file():
    try:
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")
    except Exception as e:
        print(f"Error renaming file: {e}")


def rename_file_root():
    try:
        os.rename("/input.txt", "/output.txt")
        os.rename("/docs", "/mydocs")
    except Exception as e:
        print(f"Error renaming file in root directory: {e}")


rename_file()
rename_file_root()
