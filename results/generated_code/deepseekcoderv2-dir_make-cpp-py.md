### Solution in Python
```python
import os

def mkdirp(path):
    if not path or os.path.exists(path):
        return
    head, tail = os.path.split(path)
    mkdirp(head)
    if tail:
        try:
            os.mkdir(path)
        except OSError as exc:
            print('Could not create directory %s: %s' % (path, exc))
```

