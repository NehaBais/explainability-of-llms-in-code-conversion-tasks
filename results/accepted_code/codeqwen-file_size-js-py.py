import os

# Getting size of a file in current working directory
file_path = "./input.txt"
if os.path.isfile(file_path):
    file_size = os.path.getsize(file_path)
    print("Size of file in current working directory: ", file_size, "bytes")

# Getting size of a file in root directory
root_dir_path = "/input.txt"
if os.path.isfile(root_dir_path):
    file_size = os.path.getsize(root_dir_path)
    print("Size of file in root directory: ", file_size, "bytes")
