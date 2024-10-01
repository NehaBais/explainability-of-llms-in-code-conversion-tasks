Here is the converted code from C to Python:
```
import os
from sys import argv
# Check the size of a file in the current working directory
file_path = argv[0] + "/input.txt"
if os.path.isfile(file_path):
 file_size = os.stat(file_path).st_size
 print("File size in current working directory:", file_size)
# Check the size of a file in the root directory
root_dir = "/"
file_path = root_dir + "input.txt"
if os.path.isfile(file_path):
 file_size = os.stat(file_path).st_size
 print("File size in root directory:", file_size)
```
Note: In the converted code, we use Python's `os` module to check if a file exists and get its size. We also use the `sys` module to get the current working directory and concatenate it with the file name to get the full path of the file in the current working directory. Similarly, we use the root directory path (`/`) to get the full path of the file in the root directory.

