 The equivalent Python code would be:

```python
import os

def create_dir_all(path):
    try:
        os.makedirs(path)
    except OSError as error:
        if error.errno != errno.EEXIST:
            raise

create_dir_all("./path/to/dir")
```

In this Python code, the function `os.makedirs()` is used to create a directory at the specified path. If the directory already exists, it will not be created again and instead an OSError with error number errno.EEXIST (2) will be raised. We catch these errors, check if they are of type EEXIST, and if not we raise them again to propagate the original error. This code works cross-platform as os.makedirs() is a POSIX system call that behaves the same way across different operating systems like Linux, Mac OS, and Windows.
