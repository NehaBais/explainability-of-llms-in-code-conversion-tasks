To achieve similar functionality in Python as the `os.MkdirAll` from Golang, you can use the `os.makedirs` function from the built-in `os` module. This function will create a directory and any missing parents if they do not exist. If the directory already exists, it returns without raising an error.

Here's how you can implement this:

```python
import os

def make_dirs(path):
    try:
        # The mode argument is optional and defaults to 0o777.
        # This function will work cross-platform.
        os.makedirs(path, exist_ok=True)
        print(f"Directory '{path}' created successfully.")
    except Exception as e:
        print(f"Failed to create directory '{path}': {e}")

# Example usage
make_dirs("./path/to/dir")
```

This code snippet defines a function `make_dirs` that takes a single path string as an argument. It uses `os.makedirs` with the `exist_ok=True` parameter to allow creation of directories without raising exceptions if they already exist, and it prints out a success message or an error message accordingly.

This approach works across different platforms (like Windows, macOS, Linux) and should be sufficient for your requirement.
