```python
import os

def mkdir_p(path: str):
    """
    Creates a directory and any missing parents.

    Args:
        path: The path to the directory.
    """

    os.makedirs(path, exist_ok=True)

mkdir_p("./path/to/dir")
```

**Explanation:**

* The `mkdir_p()` function takes a single argument, `path`, which is the path to the directory.
* The `os.makedirs()` function is used to create the directory and any missing parents.
* The `exist_ok=True` argument specifies that if the directory already exists, the function should not raise an error.

**Cross-Platform Compatibility:**

The `mkdir_p()` function is compatible across all major operating systems, including Windows, macOS, and Linux.
