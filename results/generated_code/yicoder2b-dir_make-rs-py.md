Sure, the equivalent Python code would be:

```python
import os

def create_directory(*paths):
    for path in paths:
        if not os.path.exists(path):
            os.makedirs(path)
        else:
            print(f'Directory {path} already exists')

create_directory('./path', './path/to', './path/to/dir')
```
This function will create all the parent directories if they do not exist. If a directory with the same name already exists at that location, it will print an error message and exit.
