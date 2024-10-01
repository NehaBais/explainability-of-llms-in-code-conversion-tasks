The given C code is creating a directory and its parent directories if they do not exist. The Python equivalent using the `os` library would look like this:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
    except OSError as error:
        print("Couldn't create directory", path, error)

# Usage
create_directory('./path/to/dir')
```
This Python function uses the `makedirs()` method from the `os` library. The `exist_ok=True` parameter is used to avoid raising an exception when the target directory already exists. If it does, no error message will be printed.
