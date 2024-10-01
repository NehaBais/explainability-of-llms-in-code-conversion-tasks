Sure! Here's the equivalent Python code for your Rust program:
```python
import os
from pathlib import Path

def main():
    file_name = sys.argv[1] if len(sys.argv) > 1 else exit("No file name supplied", 2)
    metadata = os.stat(file_name)

    print("Size of file.txt is {} bytes".format(metadata.st_size))

def exit(msg, code):
    sys.stderr.write('Error: ' + msg + '\n')
    sys.exit(code)
```
In this Python program, we use the `os` module to access system-related functions, such as getting file metadata (`os.stat`). We also import the `Path` class from the `pathlib` module, which provides additional methods for handling file paths and directory traversal. The program expects a file name as input, and it prints out the size of that file if provided. If no file name is given as an argument, it exits with error code 2.
The exit function writes an error message to standard error (`sys.stderr`), then exits with the specified error code. This is similar to how Rust's `exit_err` function works.
