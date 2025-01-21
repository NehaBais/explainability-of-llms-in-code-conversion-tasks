The Python equivalent of the Java code you provided can be achieved by using Python's built-in `os` module which provides a portable way of using operating system dependent functionality.

Here is how you can create a directory and any missing parents in Python:

```python
import os

def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")
        else:
            print("Path already exists")
    except Exception as e:
        print(e)

create_directory('C:/parent/test')
```

In this Python code, the `os.path.exists()` function checks whether a path exists or not. If it does not exist, then `os.makedirs(path)` is called to create the directory and any missing parents. If the path already exists, a message saying "Path already exists" is printed.

This implementation should work equally well cross-platform as Python's `os` module provides support for both Windows and Unix-based systems.
