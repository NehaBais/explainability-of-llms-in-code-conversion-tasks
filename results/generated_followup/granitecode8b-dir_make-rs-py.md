The error in the Python code is that it contains an indentation issue. In Python, indentation is used to define blocks of code, and it must be consistent throughout the code. The error occurs on line 3, where the `except` statement is not indented properly. To fix this error, you need to ensure that all lines within a block are indented by the same amount.
The corrected Python code is:
```py
import os
def create_directory(path):
 try:
 os.makedirs(path, exist_ok=True)
 except OSError:
 print("Error occurred while creating directory!")
create_directory("./path/to/dir")
```
This should work correctly and create the specified directory if it does not already exist.

