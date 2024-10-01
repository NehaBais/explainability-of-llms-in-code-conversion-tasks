To convert the provided JavaScript code to Python and achieve similar functionality of creating directories and any missing parents, you can use the `os` module for operating system dependent functionalities such as path manipulations and file operations. Here's how you can implement a function named `mkdirp` in Python:

```python
import os

def mkdirp(p):
    p = os.path.abspath(p)
    
    try:
        os.makedirs(p)
    except OSError as e:
        if e.errno != os.errno.EEXIST:
            raise  # If the error was not due to the directory already existing, re-raise it.

# Example usage
mkdirp('./path/to/dir')
```

### Explanation:

1. **os.path.abspath(p)**: Converts `p` to an absolute path.
2. **os.makedirs(p)**: Attempts to create the directory `p`. This function also creates any necessary parent directories.
3. **OSError Exception Handling**: If an error occurs (like `ENOENT`, which means "No such file or directory"), it catches the exception and checks if the error code is not due to the directory already existing (`EEXIST`). If it's a different error, it re-raises it.

This implementation effectively replicates the behavior of the JavaScript code in Python, handling missing parent directories automatically when creating new directories.
