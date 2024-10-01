 The equivalent Python code would be as follows:

```python
import os
import errno

def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else:
            raise
```
This Python function will behave similarly to the JavaScript one, creating a directory (and any parent directories that do not exist) and suppressing the error if the directory already exists. The `os.makedirs` function is used in Python which has similar functionality as `fs.mkdir` from Node.js.
