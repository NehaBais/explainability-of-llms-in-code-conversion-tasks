import os


def rename_files():
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")


def rename_files_root():
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


rename_files()
rename_files_root()
