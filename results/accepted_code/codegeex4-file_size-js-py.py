import os

# Get the size of input.txt in the current working directory
file_size_cwd = os.stat("input.txt").st_size

# Get the size of input.txt in the root directory
file_size_root = os.stat("/input.txt").st_size

print(f"File Size (Current Working Directory): {file_size_cwd} bytes")
print(f"File Size (Root Directory): {file_size_root} bytes")
