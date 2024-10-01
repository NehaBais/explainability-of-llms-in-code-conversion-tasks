import os


def rename_files():
    try:
        # Rename file in current working directory
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")

        # Rename files at root level
        os.rename("/root/input.txt", "/root/output.txt")
        os.rename("/root/docs", "/root/mydocs")
    except OSError as e:
        print(f"Error occurred while renaming the files: {e}")


if __name__ == "__main__":
    rename_files()
