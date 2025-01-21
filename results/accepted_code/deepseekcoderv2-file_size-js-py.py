import os

# Check the size of 'input.txt' in the current working directory
file_size_current = (
    os.path.getsize("input.txt") if os.path.exists("input.txt") else None
)
print(f"Size of input.txt in current working directory: {file_size_current} bytes")

# Check the size of 'input.txt' in the root of the file system
file_size_root = os.path.getsize("/input.txt") if os.path.exists("/input.txt") else None
print(f"Size of input.txt in root directory: {file_size_root} bytes")
