In Python you can use `os` and `shutil` modules to create a directory with missing parents. 
Here is the translated code:

```python
import os
import errno
import shutil

def mkdirp(p):
    try:
        # Try to make the directory, it will succeed if it already exists or is created.
        os.makedirs(p)
    except OSError as e: 
        # If the error was caused because the directory exists, ignore it.
        if e.errno == errno.EEXIST and os.path.isdir(p):
            pass
        else: # In any other case re-raise the error.
            raise
```
This function creates a directory with the given path `p` including missing parent directories if they do not exist yet. If it fails to create some intermediate directory, it tries again recursively until all required parent directories are created or an error occurs. If there is any error other than the directory already existing (which is ignored), this function will re-raise that error.
