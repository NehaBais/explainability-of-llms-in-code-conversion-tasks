The equivalent function in Python is `os.makedirs` which works similar to POSIX `mkdir -p`. It creates all the directories specified in its argument string. If any directory already exists, it does nothing.

```python
import os

def create_dir(path):
    try:
        os.makedirs(path)
        print(f'Directory {path} created successfully')
    except OSError as e:
        if e.errno == 17:  # FileExistsError in Python
            print(f'File exists: {path}')
        else:
            raise

# Test the function
create_dir("./path/to/dir")
```

This script will create a directory at the specified path. If the directory already exists, it will handle this situation gracefully by printing a message instead of raising an error.
