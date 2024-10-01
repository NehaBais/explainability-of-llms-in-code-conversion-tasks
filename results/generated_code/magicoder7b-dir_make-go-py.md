 You can achieve this in Python using os and pathlib libraries like so:

```python
import os
from pathlib import Path

def mkdir_p(path):
    p = Path(path)
    if not p.exists():
        p.mkdir(parents=True, exist_ok=True)

# Example usage: 
mkdir_p("/tmp/some/path/to/dir")
```

The `os` module provides a function named `mkdir()` to create a directory. However, the `mkdir_p()` function above uses `Pathlib`'s `mkdir()` method which creates all parent directories as necessary and ignores if they already exist. The `exist_ok=True` argument makes it so that it does not raise an error if the directory exists.
  
Note: The behavior of this solution is similar to Golang's os.MkdirAll(), where the parent directories are automatically created if they do not yet exist, and no error occurs if the directory already exists.
