Here's the Python code that implements the same functionality as the given C++ code:
```python
import os
def mkdir_p(path):
 try:
 os.makedirs(path)
 except OSError:
 if not os.path.exists(path):
 raise
```
This code uses the `os.makedirs()` function to create a directory and any missing parents. If the directory already exists, it will return successfully without raising an error. The `try-except` block catches any errors that occur during the creation of the directory and raises a more informative error message if necessary.

