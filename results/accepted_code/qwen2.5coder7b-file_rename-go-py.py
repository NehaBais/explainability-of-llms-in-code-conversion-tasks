import os


def rename_files_and_directory():
    # Rename in current working directory
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    # Change to root directory and then rename files and directory there
    os.chdir("/")
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


# Call the function
rename_files_and_directory()
