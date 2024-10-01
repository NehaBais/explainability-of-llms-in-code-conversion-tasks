import os


def rename_files():
    try:
        # Rename in the current directory
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")

        # Rename in the root directory
        os.rename("/input.txt", "/output.txt")
        os.rename("/docs", "/mydocs")
    except Exception as e:
        print(f"Error occurred while renaming files - {str(e)}")


rename_files()
