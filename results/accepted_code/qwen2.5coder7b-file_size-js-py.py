import os

# Get file size from current working directory
file_size1 = os.path.getsize("input.txt")
print(f"Size of 'input.txt' in current directory: {file_size1} bytes")

# Get file size from filesystem root (assuming 'c:' is the root)
file_size2 = os.path.getsize("c:/input.txt")
print(f"Size of 'input.txt' at root 'c:/': {file_size2} bytes")
