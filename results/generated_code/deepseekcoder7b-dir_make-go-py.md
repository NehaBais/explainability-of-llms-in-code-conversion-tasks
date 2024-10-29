The Python `os` module does not have an equivalent of `mkdir -p`, but you can mimic this behavior using `os.makedirs()` method which creates a directory recursively. Here is how to do it:

```python
import os

def make_directory(path):
    try: 
        os.makedirs(path, exist_ok=True) # exist_ok = True will prevent an exception if the directory already exists
    except Exception as e:
        print("Error creating directory: ", e)

make_directory("/tmp/some/path/to/dir")
```

This function creates a directory and any missing parents. If the directory already exists, it won't raise an error. The `exist_ok=True` argument is equivalent to 'mkdir -p'.

This will handle creating directories on different platforms that support the os module. It uses exceptions for error handling, so please ensure you have appropriate exception handling around your production code.

