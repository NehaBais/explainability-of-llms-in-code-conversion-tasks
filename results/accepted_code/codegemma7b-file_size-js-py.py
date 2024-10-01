import os

# Get the size of a file called input.txt in the current working directory
file_size = os.path.getsize("input.txt")

# Get the size of a file called input.txt in the file system root
file_size_root = os.path.getsize("/input.txt")

# Print the file sizes
print("File size in current working directory:", file_size)
print("File size in file system root:", file_size_root)
