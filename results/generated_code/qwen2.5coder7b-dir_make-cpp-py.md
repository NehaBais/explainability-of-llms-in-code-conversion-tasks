Sure, here is the equivalent Python code for creating a directory and any missing parents. This function will work cross-platform.

```python
import os

def mkdir_p(path):
    try:
        os.makedirs(path)
        return 0
    except OSError as e:
        if e.errno == errno.EEXIST and os.path.isdir(path):
            return 0
        else:
            print(f"couldn't create directory: {path}")
            return -1

if __name__ == "__main__":
    import sys
    if len(sys.argv) != 2:
        print("usage: mkdir <path>")
        sys.exit(-1)

    path_to_create = sys.argv[1]
    result = mkdir_p(path_to_create)
    sys.exit(result)
```

### Explanation:

1. **os.makedirs(path)**: This function creates a directory and any necessary parent directories, just like `mkdir -p` in Unix-like systems.

2. **try-except block**: This handles exceptions that may occur during the directory creation process.
   - If the directory already exists (`errno.EEXIST`), it returns `0`.
   - For other exceptions, it prints an error message and returns `-1`.

3. **Argument Parsing**: The script checks if the correct number of arguments is provided. If not, it prints a usage message and exits with a status code of `-1`.

4. **Execution**: The main function (`if __name__ == "__main__":`) handles command-line arguments and invokes the `mkdir_p` function.

This Python code should behave similarly to the C++ code you provided, creating directories and handling errors appropriately.
