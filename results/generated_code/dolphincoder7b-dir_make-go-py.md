```python
import os
def mkdir_p(path):
    parts = path.split('/')
    for i, part in enumerate(parts[1:], start=1):
        if not part:
            continue
        new_part = '/'.join(parts[:i+1])
        try:
            os.mkdir(new_part)
        except FileExistsError:
            pass
```
