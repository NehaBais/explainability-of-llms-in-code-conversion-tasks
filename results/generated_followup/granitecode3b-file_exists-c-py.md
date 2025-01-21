The error message indicates that there is an indentation error in the Python code after the `if` statement on line 3. The correct syntax for the `if` statement should be indented to align with the opening parenthesis of the function call.
The fix for this error is to simply add a space before the opening parenthesis of the function call.
This should resolve the indentation error and allow the Python code to execute without any issues.
The corrected code in a single code block would be:
```python
import os
def check_file_exists(path, is_directory=False):
 if is_directory:
  return os.path.isdir(path)
 else:
  return os.path.isfile(path)
print("input.txt is a regular file? ", check_file_exists("input.txt", False))
print("/docs is a directory? ", check_file_exists("/docs", True))
```

