import os


def rename_files():
    # Rename "input.txt" to "output.txt" in the current working directory
    os.rename("input.txt", "output.txt")

    # Rename "docs" to "mydocs" in the current working directory
    os.rename("docs", "mydocs")

    # Rename "/input.txt" to "/output.txt" in the root of the file system
    os.rename("/input.txt", "/output.txt")

    # Rename "/docs" to "/mydocs" in the root of the file system
    os.rename("/docs", "/mydocs")


if __name__ == "__main__":
    rename_files()
