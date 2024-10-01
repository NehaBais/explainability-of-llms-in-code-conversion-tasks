Here's the equivalent Python code:
```
import os
def create_directory(path):
 try:
 os.makedirs(path, exist_ok=True)
 except OSError as e:
 print(f"Error creating directory: {e}")
```
In this Python code, we import the `os` module and define a function called `create_directory()` that takes a single path string argument. We use the `try-except` block to handle any errors that may occur when creating the directory. If an error occurs, we print an error message. The `exist_ok=True` parameter in the `os.makedirs()` function allows us to create the directory if it already exists without raising an error.

