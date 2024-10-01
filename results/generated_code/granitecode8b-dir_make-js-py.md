Here's how you can implement the same functionality in Python using the `os` module:
```python
import os
def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno == 17: # File exists
            return
        elif e.errno == 2: # No such file or directory
            parent_dir = os.path.dirname(path)
            mkdirp(parent_dir)
            mkdirp(path)
        else:
            raise
```
The `os.makedirs()` function creates all the necessary directories along the given path, creating intermediate directories as needed. If a directory already exists, it raises an OSError exception with the error code 17 (file exists). To handle this case, we can catch the exception and check if the error code is 17. If so, we return successfully, indicating that the directory already exists.
If the error code is anything else, we raise the exception again to indicate that something else went wrong.

