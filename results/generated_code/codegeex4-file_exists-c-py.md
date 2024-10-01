The equivalent Python code for the given C program would be:

```python
import os

def check_reg(path):
    return os.path.isfile(path)

def check_dir(path):
    return os.path.isdir(path)

if __name__ == "__main__":
    print("input.txt is a regular file? ", "yes" if check_reg("input.txt") else "no")
    print("docs is a directory? ", "yes" if check_dir("docs") else "no")
    print("/input.txt is a regular file? ", "yes" if check_reg("/input.txt") else "no")
    print("/docs is a directory? ", "yes" if check_dir("/docs") else "no")
```

Here, the `os.path.isfile()` function checks whether a path exists and points to an existing regular file. The `os.path.isdir()` function checks whether a path exists and points to an existing directory.
Please note that if you're running this code in an environment where it's not allowed to access "/input.txt" or "/docs", you will need to replace them with valid paths in your filesystem.
Also, the Python script will look for "input.txt" file and "docs" folder in the current working directory. If you want to check if such a file/folder exists in the root directory of your system, you will have to use absolute path instead.
