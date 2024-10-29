import os

# for current directory
file_size = os.path.getsize("input.txt")
print(f"Size of input.txt (in bytes): {file_size}")

# for the file system root
root_directory_size = os.path.getsize("/input.txt")
print(f"Size of /input.txt (in bytes): {root_directory_size}")
