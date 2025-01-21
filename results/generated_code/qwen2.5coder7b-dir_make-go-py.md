The Python equivalent of the GoLang code is:

```python
import os

def create_directory(path):
    if not os.path.exists(path):
        os.makedirs(path)

create_directory('/tmp/some/path/to/dir')
```

This function will create the directory and its parents if they don't already exist. If they do, it will simply return without doing anything.
