Here's the Python code that performs the same task as the given Golang code:
```python
import os
def print_file_size(f):
    try:
        stat = os.stat(f)
        size = stat.st_size
        print(f"Size of {f}: {size} bytes")
    except Exception as e:
        print(f"Error getting file size for {f}: {e}")
if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
```
In this Python code, we use the `os` module to get information about files and directories. We define a function `print_file_size()` that takes a file path as input and uses the `stat()` method to get the size of the file in bytes. If an error occurs while getting the size, it will be caught in the `try-except` block and printed out.

