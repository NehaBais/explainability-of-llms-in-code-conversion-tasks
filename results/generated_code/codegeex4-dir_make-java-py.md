In Python, you can use the `os` module to accomplish this task. Here's how you could implement the equivalent of your Java code in Python:

```python
import os

def create_directory(path):
    try:
        # Check if directory already exists
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")
        else:
            print("Path already exists")
    except Exception as e:
        print(f"An error occurred: {e}")

# Test the function
create_directory("./path/to/dir")
```

This Python code does exactly what your Java version does, creating any missing parent directories and then creating the specified directory. If the directory already exists, it informs you by printing "Path already exists".
