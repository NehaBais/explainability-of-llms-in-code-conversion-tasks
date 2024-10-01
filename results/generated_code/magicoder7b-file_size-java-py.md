 In Python, you can use the `os` and `stat` standard libraries to get the size of a file in bytes. Here's how to do it:

```python
import os

def print_file_size(file_path):
    file_info = os.stat(file_path)
    print("{:,} B".format(file_info.st_size))

print_file_size('file.txt')  # For a file in the current working directory
print_file_size('/file.txt')  # For a file in the root of the filesystem
```

This Python code does exactly what your Java code was doing. It creates two File objects, one for "file.txt" and one for "/file.txt", and then it uses `os.stat()` to get information about each file (specifically its size), then it prints that size in bytes formatted as a string with comma as thousand separator. Note: the path '/file.txt' is an absolute path, which means it starts from root directory of your filesystem. If you just want 'file.txt' without specifying a full path, it will find the file in the current working directory where this Python script was run.
