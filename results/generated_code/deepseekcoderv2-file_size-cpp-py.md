 Sure, here is the equivalent Python code to achieve the same functionality:

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except FileNotFoundError as ex:
        print(ex)

print_file_size("input.txt")
print_file_size("/input.txt")
```

This Python code uses the `os` module to check the size of a file named `input.txt`, first in the current working directory, and then in the root of the file system. If the file does not exist, it catches a `FileNotFoundError` and prints an error message.
