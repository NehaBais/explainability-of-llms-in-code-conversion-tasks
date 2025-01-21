 Sure! Here's the equivalent Python code using the `os` or `os.path` module to create a directory and any missing parent directories:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
        print("Directory created successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
create_directory("./path/to/dir")
```

In this Python code:
- The `os.makedirs` function is used to create the directory and any necessary parent directories.
- The `exist_ok=True` argument ensures that if the directory already exists, no error will be raised.
- If an exception occurs (e.g., due to a permission issue), it will be caught and printed.
