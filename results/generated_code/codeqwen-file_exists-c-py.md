The equivalent code in Python would be:

```python
import os

def check_file(path):
    if os.path.isfile(path):
        return True
    else:
        return False

def check_directory(path):
    if os.path.isdir(path):
        return True
    else:
        return False

# Check for regular file in current working directory
input_txt = "input.txt"
docs = "docs"

print("input.txt is a regular file?", check_file(input_txt))
print("docs is a directory?", check_directory(docs))

# Check for both files and directories in the root of the filesystem
root_dir = '/'

if check_file(os.path.join(root_dir, input_txt)):
    print("/input.txt is a regular file?")

if check_directory(os.path.join(root_dir, docs)):
    print("/docs Is a directory?")
```

In Python, we use the `os.path.isfile()` and `os.path.isdir()` functions to determine whether a path is a file or a directory respectively. We also use `os.path.join()` to construct the full path to our files and directories in the root of the filesystem. Note that when checking for regular files, you must include the filename (input.txt) with its parent directory (docs), unlike in C where we are only checking for the existence of a file in the current working directory.
