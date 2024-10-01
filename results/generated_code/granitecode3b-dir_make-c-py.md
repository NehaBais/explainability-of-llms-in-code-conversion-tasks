Here's a Python implementation of the code you provided:
```python
import os
def mkdirp(path):
 try:
 os.makedirs(path)
 except OSError as e:
 if e.errno != os.errno.EEXIST or not os.path.isdir(path):
 raise
```
This function uses the `os.makedirs()` method to create all the necessary directories in the path, and raises an error if any part of the path already exists but is not a directory.

