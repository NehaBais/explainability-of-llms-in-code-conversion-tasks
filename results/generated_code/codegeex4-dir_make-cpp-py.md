You can achieve the same functionality in Python using the `os` and `pathlib` modules. Here's an equivalent function that creates directories with missing parents:

```python
import os
from pathlib import Path

def mkdir_p(path):
    try:
        # Using exist_ok=True to ignore the FileExistsError exception if the directory already exists.
        Path(path).mkdir(parents=True, exist_ok=True)
        return 0
    except Exception as e:
        print(f"Couldn't create directory: {path}")
        print(str(e))
        return -1

# Example usage:
if __name__ == "__main__":
    path_to_create = "./path/to/dir"
    result = mkdir_p(path_to_create)
    print("Successfully created directory." if result == 0 else "Failed to create directory.")
```

In this Python function, `Path().mkdir(parents=True, exist_ok=True)` is used to create a new directory along with any necessary parent directories. If the directory already exists or an error occurs during creation, it returns `-1` and prints an error message.
