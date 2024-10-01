Python does not have a direct equivalent to the Rust `std::fs` module, but it is possible to replicate its functionality with the following Python code:

```python
import os

def mkdir_p(path):
    try:
        os.makedirs(path)
    except FileExistsError:
        pass

# Example usage
mkdir_p("./path/to/dir")
```

This function creates a directory using the `os.makedirs()` function, which behaves similarly to the `mkdir -p` command in Unix-like systems. The exception handling is used to catch `FileExistsError`, which is raised when trying to create a directory that already exists. In this case, nothing happens and the function returns successfully.

Note: This solution does not work perfectly for all edge cases such as paths containing multiple dots or absolute paths. A more complete implementation would be required if accurate creation of all potential parent directories is needed.
