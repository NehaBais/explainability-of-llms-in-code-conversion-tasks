import os


def rename_file(oldname, newname):
    if os.path.exists(oldname):  # Check if file exists
        os.rename(oldname, newname)  # Rename file
        print("File renamed successfully")
    else:
        print("File does not exist")


def rename_directory(oldname, newname):
    if os.path.exists(oldname):  # Check if directory exists
        os.rename(oldname, newname)  # Rename directory
        print("Directory renamed successfully")
    else:
        print("Directory does not exist")


# Test the function with current working directory
rename_file("input.txt", "output.txt")
rename_directory("docs", "mydocs")

# Test with filesystem root directory
rename_file("/input.txt", "/output.txt")
rename_directory("/docs", "/mydocs")
