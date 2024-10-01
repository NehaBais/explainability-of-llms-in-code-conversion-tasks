Here's an equivalent Python function that achieves the same side-effect as the Golang code:
```python
import os
def mkdir_p(path):
 try:
 os.makedirs(path)
 except OSError as exc:
 if exc.errno == os.errno.EEXIST and os.path.isdir(path):
 pass
 else:
 raise
```
This function uses the `os.makedirs()` function to create the directory and any missing parents. If the directory already exists, it catches the `OSError` exception and checks if the error code is `EEXIST` (which indicates that the directory already exists) and if the path is a directory (`isdir`). If both conditions are met, the function passes without doing anything. Otherwise, it re-raises the exception to indicate that something went wrong.

