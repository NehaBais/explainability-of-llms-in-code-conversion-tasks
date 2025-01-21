 Sure! Here's how you can implement the `mkdir_p` function in Python to achieve the same behavior as `os.MkdirAll` in Go:

```python
import os

def mkdir_p(path):
    """Create a directory and any missing parents."""
    try:
        os.makedirs(path, mode=0o770)
    except FileExistsError:
        # If the directory already exists, do nothing
        pass

# Example usage:
mkdir_p("/tmp/some/path/to/dir")
```

This function uses `os.makedirs` to create directories recursively and set their permissions. If the directory already exists, it catches the `FileExistsError` exception and does nothing.
