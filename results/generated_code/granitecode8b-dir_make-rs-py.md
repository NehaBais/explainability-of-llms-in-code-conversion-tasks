Here's the Python code that implements the same functionality as the Rust code:
```python
import os
def create_directory(path):
 try:
 os.makedirs(path, exist_ok=True)
 except OSError:
 print("Error occurred while creating directory!")
create_directory("./path/to/dir")
```
The `os` module in Python provides a portable way of interacting with the operating system, and the `makedirs()` function creates all the necessary directories along the given path. The `exist_ok=True` argument ensures that if the directory already exists, the function will not raise an error.

