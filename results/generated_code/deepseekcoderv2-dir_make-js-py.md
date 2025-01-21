 To convert the given JavaScript code to Python, we can use the `os` and `os.path` modules for file system operations. Here's how you can implement the equivalent function in Python:

```python
import os

def mkdirp(p):
    p = os.path.normpath(p)
    try:
        os.makedirs(p, exist_ok=True)
        return True
    except Exception as e:
        if 'ENOENT' in str(e):
            parent_dir = os.path.dirname(p)
            mkdirp(parent_dir)
            try:
                os.makedirs(p, exist_ok=True)
                return True
            except Exception as e:
                print(f"Error creating directory {p}: {e}")
                return False
        else:
            print(f"Error creating directory {p}: {e}")
            return False

# Example usage:
mkdirp('./path/to/dir')
```

### Explanation:
1. **Normalize the Path**: We use `os.path.normpath` to normalize the path, ensuring consistent handling of different path separators (`/`, `\`, etc.).
2. **Try to Create Directory**: We attempt to create the directory using `os.makedirs(p, exist_ok=True)`. The `exist_ok=True` parameter ensures that if the directory already exists, no error is raised.
3. **Handle Errors**: If an exception occurs:
   - If the error code contains 'ENOENT' (which stands for "No such file or directory"), it means the parent directory does not exist. We recursively call `mkdirp` on the parent directory to create it first.
   - For any other errors, we print the error message and return `False`.

This implementation should work equally well across different platforms (Windows, macOS, Linux, etc.).
