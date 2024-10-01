Here's the equivalent Python code:
```
import os
def mkdirp(path):
 try:
 os.makedirs(path)
 except OSError as exc: # Python >2.5
 if exc.errno == errno.EEXIST and os.path.isdir(path):
 pass
 else: raise
```
This code uses the `os` module to create directories and check for existing directories. The `try/except` block handles any errors that may occur during the creation process, and the `if` statement checks if the error is due to a directory already existing and is a directory. If so, it ignores the error.

