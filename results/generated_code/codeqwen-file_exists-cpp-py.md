The equivalent code in Python is as follows:

```python
import os

def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" Is a directory")
        else:
            print(" exists with a file size of ", os.path.getsize(path), " bytes.")
    else:
        print(" does not exist")

file_exists("input.txt")
file_exists("/zero_length.txt")  # if you want to check the root directory, you need to provide an absolute path
file_exists("/docs/input.txt")
file_exists("/docs/zero_length.txt")
```

Please note that in Python, directories are usually referred to using a forward slash ("/"), so if you are running this script on a Unix-based system or any other operating system where "/" is the root directory of the filesystem, you will need to use "/docs/input.txt" and "/docs/zero_length.txt". The Python `os` module provides a function named `path.exists()` which checks whether the specified path exists or not. If the path is an existing regular file, it returns True. If the path does not exist or the user doesn’t have the appropriate permissions to access the path, it raises an exception.
