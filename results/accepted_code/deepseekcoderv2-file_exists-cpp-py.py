import os


def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" is a directory")
        else:
            print(f" exists with a file size of {os.path.getsize(path)} bytes.")
    else:
        print(" does not exist")


# For the current working directory
file_exists("input.txt")
file_exists("zero_length.txt")
file_exists("docs/input.txt")
file_exists("docs/zero_length.txt")

# For the filesystem root (assuming you have permission to access these paths)
root_paths = ["C:\\", "D:\\"]  # Replace with appropriate root directories if applicable
for root in root_paths:
    file_exists(os.path.join(root, "input.txt"))
    file_exists(os.path.join(root, "zero_length.txt"))
    file_exists(os.path.join(root, "docs/input.txt"))
    file_exists(os.path.join(root, "docs/zero_length.txt"))
