In Python, you can use the `os` and `os.path` modules to achieve this functionality. 

Here's a single function implementation in Python:

```python
import os

def create_directory(path):
    try:
        # Create all directories and their parents if they don't exist
        os.makedirs(path, exist_ok=True)
        print("Directory created successfully!")
    except OSError as e:
        if e.errno == errno.EEXIST:
            print("Directory already exists!")
        else:
            raise

create_directory("/tmp/some/path/to/dir")
```
