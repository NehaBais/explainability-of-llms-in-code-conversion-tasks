import os
import shutil


def main():
    # Rename current directory files
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # For root filesystem, we have to provide full path
    # because Python script and file operations are running in different directories
    shutil.move("/home/user/input.txt", "/home/user/output.txt")
    shutil.move("/home/user/docs", "/home/user/mydocs")


if __name__ == "__main__":
    main()
