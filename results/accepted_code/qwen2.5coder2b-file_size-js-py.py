import os

# Get size of file in current working directory
file_size_current_directory = os.path.getsize("input.txt")
print(f"Size of 'input.txt' in current directory: {file_size_current_directory} bytes")

# Get size of file in the root directory
file_size_root_directory = os.path.getsize("c:/input.txt")
print(f"Size of 'input.txt' in the root directory: {file_size_root_directory} bytes")
