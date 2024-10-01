 The equivalent Python code to achieve the same functionality is as follows. This will work cross-platform and for both file and directory paths:

```python
import os
import errno

def mkdir_p(path):
    try:
        os.makedirs(path)
    except OSError as exc:  # Python >2.5
        if exc.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else:
            raise

mkdir_p("path/to/dir")
```

This function uses the built-in `os` module in Python to create directories. It attempts to create a directory at the given path, ignoring the error if it already exists. If an error occurs and it's not because the directory already exists, it will be raised again. 