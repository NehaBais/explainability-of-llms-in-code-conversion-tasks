This is a Python solution for the given problem:

```python
import os

def create_file(fn):
    f = open(fn, "w+")
    print(f"file {fn} created!")
    f.close()

def create_dir(dn):
    os.mkdir(dn)
    print(f"directory {dn} created!")

create_file("output.txt")
create_file("/output.txt")
create_dir("docs")
create_dir("/docs")
```

In this code, we use the `os` module to create files and directories. The `open()` function is used to create a new file with an empty content. We then print a message indicating that the file has been created. 

Similarly, we use the `mkdir()` function from the `os` module to create a directory. If the directory doesn't exist yet, it will be created. We then print a message indicating that the directory has been created. The `w+` argument is used to open the file in write mode with truncation.

In the `main()` function, we call these functions twice: once for files and once for directories. This ensures that the files and directories are created in both the current working directory and the filesystem root.
