```python
import os
import errno

def mkdir_p(path):
    """
    Creates a directory and any missing parents.
    """
    try:
        os.makedirs(path, exist_ok=True)
    except OSError as exc:
        if exc.errno != errno.EEXIST:
            raise
```

