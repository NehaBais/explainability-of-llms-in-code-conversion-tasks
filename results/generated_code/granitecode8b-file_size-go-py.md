Here's the Python code that accomplishes the same task as the Golang code:
```
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
```
The `os` module in Python provides functions for interacting with the operating system, including `os.path.exists()` to check if a file exists and `os.stat()` to get information about a file. The `st_size` attribute of the resulting object contains the size of the file in bytes. The function also checks if the file exists before trying to get its size.

