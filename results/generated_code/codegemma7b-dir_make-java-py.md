```python
import os

def mkdir_p(path):
    """
    Creates a directory and any missing parents.
    """
    try:
        os.makedirs(path, exist_ok=True)
        print(f"Path '{path}' successfully created.")
    except Exception as e:
        print(f"Error creating directory '{path}': {e}")

mkdir_p("./path/to/dir")
```

**Explanation:**

* The `os.makedirs()` function is used to create directories recursively.
* The `exist_ok=True` argument prevents an error if the directory already exists.
* The function prints a success message if the directory is created successfully.
* The function catches any exceptions and prints an error message.

**Note:**

* This function is cross-platform compatible.
* It handles errors gracefully and provides informative feedback.
