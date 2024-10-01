Here's the Python code that achieves the same result as the provided C code:
```python
import os
def check_file_exists(path, is_directory=False):
 if is_directory:
 return os.path.isdir(path)
 else:
 return os.path.isfile(path)
print("input.txt is a regular file? ", check_file_exists("input.txt", False))
print("docs is a directory? ", check_file_exists("docs", True))
print("/input.txt is a regular file? ", check_file_exists("/input.txt", False))
print("/docs is a directory? ", check_file_exists("/docs", True))
```
The Python code imports the `os` module to use its functions for checking file and directory existence. The `check_file_exists()` function takes two arguments: the path of the file or directory to check, and a boolean flag indicating whether we want to check for a regular file (`False`) or a directory (`True`).
The `print()` statements then call the `check_file_exists()` function with the appropriate arguments to verify that the files and directories exist as expected. The output will be similar to the following:
input.txt is a regular file? True
docs is a directory? True
/input.txt is a regular file? False
/docs is a directory? False
Note that the Python code uses the `os.path` functions to check for the existence of files and directories, rather than using the system calls directly like the C code does. This makes the code more portable and easier to read.

