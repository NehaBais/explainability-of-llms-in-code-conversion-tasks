```python
import os

def mkdirp(path):
    """
    Creates a directory and any missing parents.

    Usage:
        mkdirp('path/to/dir')
    """

    path = os.path.abspath(path)
    directory = os.path.dirname(path)

    if not os.path.exists(directory):
        os.makedirs(directory, exist_ok=True)

    if not os.path.exists(path):
        os.mkdir(path)
```
