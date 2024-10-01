import os
def print_file_size(f):
 if os.path.exists(f):
 file_size = os.stat(f).st_size
 print(f"File size for {f}: {file_size} bytes")
 else:
 print(f"File not found: {f}")
# Test the function with a file in the current working directory and one in the file system root
print_file_size("input.txt")
print_file_size("/input.txt")