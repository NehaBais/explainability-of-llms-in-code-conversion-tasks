import os


def rename_files():
    try:
        # here
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")

        # root
        with os.popen("cd /") as w:  # change directory to the root
            os.rename("/input.txt", "/output.txt")
            os.rename("/docs", "/mydocs")
    except PermissionError:  # user does not have permission to rename files/directories
        print("Permission denied!")


if __name__ == "__main__":
    rename_files()
