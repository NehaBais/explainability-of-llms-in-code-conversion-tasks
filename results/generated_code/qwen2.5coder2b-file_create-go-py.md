In Python, the `os` module provides functions to interact with the file system. Here is how you can rewrite the given Golang code in Python:

```python
import os

def create_file(filename):
    try:
        open(filename, 'w').close()  # Open the file for writing and close it immediately
        print(f"File {filename} created!")
    except IOError as e:
        print(e)

def create_directory(directory_name):
    try:
        os.makedirs(directory_name)  # Create directory if it does not exist
        print(f"Directory {directory_name} created!")
    except OSError as e:
        print(e)

if __name__ == "__main__":
    create_file("input.txt")
    create_file("/input.txt")
    create_directory("docs")
    create_directory("/docs")
```

Note that Python's file and directory handling functions do not support creating files of size 0 bytes. If such requirement is necessary, you may need to use `with` statement along with `os.fdopen()` or write bytes directly to the file using a loop.
