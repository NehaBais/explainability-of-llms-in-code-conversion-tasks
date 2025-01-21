The equivalent code in Python would be:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path)
    except OSError as e:
        print(f"Error: {e.strerror}")

create_directory("./path/to/dir")
```

In this Python code, we're using the `os` module's `makedirs()` function to create a directory and its parent directories. If an error occurs (like if the directory already exists), it will be caught by the `except` block and printed out.
