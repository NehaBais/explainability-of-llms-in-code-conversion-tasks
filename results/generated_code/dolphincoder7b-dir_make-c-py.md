This is the Python equivalent of your C code:

```python
import os
from pathlib import Path


def mkdir_p(path):
    path = Path(path)
    if not path.exists():
        path.mkdir(parents=True, exist_ok=False)  # If we get an error, it's because the directory already exists and is not a regular file.


# Test
if __name__ == "__main__":
    mkdir_p("dir1/dir2/dir3")
    print(os.listdir())  # ["dir1", "dir2", "dir3"]
```

Please note that this code uses the `pathlib` module in Python, which is more flexible and recommended over the built-in `os` module for file operations. It also creates directories using the `mkdir(parents=True)` method instead of `mkdir(mode=0)`, which may not work on some platforms or have other restrictions.

The usage function `basename` is similar to `os.path.basename`, but it returns only the filename part (without the directory), unlike `os.path.basename`. You can safely remove this function from your code if you don't need it for any reason.
