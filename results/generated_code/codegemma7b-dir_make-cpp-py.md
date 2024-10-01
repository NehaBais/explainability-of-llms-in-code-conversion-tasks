```python
import os

def mkdir_p(path):
    """
    Creates a directory and any missing parents.

    Args:
        path (str): The path to the directory to create.

    Returns:
        bool: True if the directory was created, False otherwise.
    """

    if os.path.exists(path):
        return True

    try:
        os.makedirs(path, exist_ok=True)
        return True
    except Exception as e:
        print(f"Error creating directory '{path}': {e}")
        return False

# Create the directory ./path/to/dir
mkdir_p("./path/to/dir")
```

**Cross-platform compatibility:**

The code is compatible with most modern operating systems, including Windows, macOS, and Linux.

**Notes:**

* The `mkdir_p()` function returns `True` if the directory was created successfully, or `False` if an error occurred.
* The `exist_ok` argument to `os.makedirs()` ensures that the directory is not overwritten if it already exists.
* The `try-except` block handles any exceptions that may occur during directory creation.
