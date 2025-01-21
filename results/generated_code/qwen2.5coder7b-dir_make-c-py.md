To convert the given C code to Python, you can use the `os` module which provides a portable way of using operating system dependent functionality. Here's how you could implement the same functionality in Python:

```python
import os

def mkdir_p(path):
    """Create directory and any missing parents"""
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != errno.EEXIST or not os.path.isdir(path):
            raise

# Example usage
mkdir_p("./path/to/dir")
```

### Explanation:

1. **Importing the `os` module**: This is necessary to interact with the operating system and perform directory operations.
2. **Defining the `mkdir_p` function**: This function takes a single argument, `path`, which is the path to the directory you want to create.
3. **Using `os.makedirs(path)`**: This method attempts to create all intermediate-level directories needed to contain the leaf directory. If any directory already exists, no exception is raised.
4. **Handling exceptions**: If an error occurs during the creation of the directory (e.g., the directory already exists), it will catch the `OSError` and check if the error was due to the directory already existing (`errno.EEXIST`). If the error is not related to the directory already existing, or if the path is not a directory, it will re-raise the exception.

This Python implementation is cross-platform and should work on both Unix-like systems and Windows.
