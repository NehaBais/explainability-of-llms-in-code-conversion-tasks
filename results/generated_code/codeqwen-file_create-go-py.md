The equivalent code in Python would be:

```python
import os

def create_file(fn):
    try:
        with open(fn, 'w'):
            pass  # Do nothing, just create the file.
        print(f"File {fn} created!")
    except Exception as e:
        print(e)

def create_dir(dn):
    try:
        os.mkdir(dn)
        print(f"Directory {dn} created!")
    except Exception as e:
        print(e)

create_file("input.txt")
create_file("/input.txt")  # '/' character is not needed in Python to denote root directory
create_dir("docs")
create_dir("/docs")  # '/' character is not needed in Python to denote root directory
```

In Python, the os module provides functions for interacting with the operating system such as creating directories, removing files and directories, etc. The 'with open(fn, 'w'):' part of the code creates an empty file at the specified path. If an error occurs during this operation (for example, if a file already exists with that name), it will be caught and its message will be printed to the console.

The os.mkdir() function is used to create directories in Python. It also raises an exception for any error that occurs while creating the directory.
