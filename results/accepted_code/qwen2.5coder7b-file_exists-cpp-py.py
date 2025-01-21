import os


def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" is a directory")
        else:
            print(f" exists with a size of {os.path.getsize(path)} bytes.")
    else:
        print(" does not exist")


# Check for files and directories in the current working directory
file_exists("input.txt")
file_exists("zero_length.txt")

# Check for files and directories in the filesystem root (Note: This part may not work on all systems due to permissions)
root_path = "/"
if os.access(root_path, os.F_OK):
    file_exists(os.path.join(root_path, "docs", "input.txt"))
    file_exists(os.path.join(root_path, "docs", "zero_length.txt"))
else:
    print("The filesystem root is not accessible.")
