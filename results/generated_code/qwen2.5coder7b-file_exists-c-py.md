Sure, here's the equivalent Python code for the given C program:

```python
import os

def check_file(path):
    return os.path.isfile(path)

def check_directory(path):
    return os.path.isdir(path)

# Check for current working directory
print("input.txt is a regular file?", "yes" if check_file("input.txt") else "no")
print("docs is a directory?", "yes" if check_directory("docs") else "no")

# Check for filesystem root
root_path = '/'
print("/input.txt is a regular file?", "yes" if check_file(root_path + "input.txt") else "no")
print("/docs is a directory?", "yes" if check_directory(root_path + "docs") else "no")
```

This Python code uses the `os` module to check for the existence of files and directories. The functions `check_file` and `check_directory` are equivalent to the `stat` checks in the C code.
