import os


def get_file_size(file_path):
    try:
        file_size = os.path.getsize(file_path)
        print(f"File size of {file_path}: {file_size} bytes")
        return file_size
    except FileNotFoundError:
        print(f"File not found: {file_path}")
        return None


# Current working directory
get_file_size("input.txt")

# File system root
root_path = "/"
if os.path.exists(root_path + "input.txt"):
    get_file_size(root_path + "input.txt")
else:
    print("No input.txt in the file system root.")
