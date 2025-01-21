The equivalent code in Python would be:

```python
import os

def mkdirp(path):
    path = path.resolve()
    
    while not os.path.exists(path):
        parent_path = os.path.dirname(path)
        if not os.path.exists(parent_path):
            mkdirp(parent_path)
        
        os.makedirs(path)
```

This function works by recursively creating the directory structure specified in the path, as long as each directory along the way does not exist. The `os.makedirs()` function is used for this purpose and it creates directories and parent directories if they do not already exist.
