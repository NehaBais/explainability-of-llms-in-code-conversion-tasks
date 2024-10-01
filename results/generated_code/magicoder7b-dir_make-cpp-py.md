 The equivalent Python code would be as follows:

```python
import os

def make_dirs(path):
    try:
        os.makedirs(path)
        return True
    except OSError as error:
        if error.errno != errno.EEXIST:
            print("Couldn't create directory:", path)
            return False
        else:
            return True
```
In this Python code, the function `make_dirs()` takes a path as an argument and attempts to make that directory using the `os.makedirs()` function. If the directory already exists, it will catch the `OSError` exception with error number 17 (EEXIST) and return True indicating successful creation or existence of the directory. If any other error occurs, it prints a message and returns False to indicate failure to create the directory.
