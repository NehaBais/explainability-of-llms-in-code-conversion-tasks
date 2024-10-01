Here's the Python code that achieves the same functionality as the Golang code you provided:
```
import os
def mkdir_p(path):
 try:
 os.makedirs(path, mode=0o770)
 except OSError as e:
 if e.errno != errno.EEXIST or not os.path.isdir(path):
 raise
```
This code uses the `os` module to create a directory and any missing parents. If the directory already exists, it returns successfully without raising an error. The `try-except` block is used to handle potential errors that may occur during the directory creation process. 
Note that the mode argument in `os.makedirs()` is specified as an octal number (e.g., 0o770) to ensure cross-platform compatibility. Additionally, the `errno` module is used to check if the error was due to a directory already existing. Finally, the `os.path.isdir()` method is used to verify that the path exists and is a directory before raising an error.

