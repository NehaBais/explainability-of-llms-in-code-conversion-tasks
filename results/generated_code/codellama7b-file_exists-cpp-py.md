 Here is the equivalent Python code:
```
import os

def file_exists(path):
    if os.path.exists(path):
        if os.path.isdir(path):
            print(f"{path} is a directory")
        else:
            size = os.path.getsize(path)
            print(f"{path} exists with a file size of {size} bytes.")
    else:
        print(f"{path} does not exist")

if __name__ == "__main__":
    file_exists("input.txt")
    file_exists("zero_length.txt")
    file_exists("docs/input.txt")
    file_exists("docs/zero_length.txt")
```
Note that the `os` module is used for file and directory operations in Python. The `pathlib` module can also be used, but it provides a more high-level interface for working with paths.
