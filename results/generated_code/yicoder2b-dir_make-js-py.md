Sure, here's how you can implement that in Python.
Please note that this code doesn't account for the cross-platform issue but it should work the same way on both Unix and Windows.
```python
import os

def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e1:
        if not os.path.isfile(path): # if directory is still being created by another process
            raise
        else: # the path exists and it's a file, this means that the parent directory was successfully created 
            return True
    return False
```
This Python function checks if the directory already exists or not. If it doesn't exist it creates the whole path to that directory. If it already exists then function returns `True` without any error.
