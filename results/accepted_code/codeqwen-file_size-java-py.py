import os


def get_file_size(filename):
    if os.path.exists(filename):
        return os.path.getsize(filename)
    else:
        return "File does not exist"


# current working directory
print("Size of file in current directory (input.txt): ", get_file_size("input.txt"))

# root directory
print("Size of file in root directory (/input.txt): ", get_file_size("/input.txt"))
