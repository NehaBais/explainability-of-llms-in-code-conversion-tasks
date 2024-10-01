The equivalent functionality in Python can be achieved using the `os.makedirs()` function, which is part of the `os` module.

Here's how you can implement the required functionality in Python:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path)
        return True
    except OSError as e:
        if e.errno == errno.EEXIST:
            return False
        else:
            raise
```

This function takes a path string as input and creates the directory at that path, along with any missing parent directories. If the directory already exists, the function returns `False`. Otherwise, it returns `True` to indicate successful creation of the directory.
