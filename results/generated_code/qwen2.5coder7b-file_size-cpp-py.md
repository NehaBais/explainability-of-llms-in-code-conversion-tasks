Sure, here is the equivalent Python code for the given C++ code using the `os` module:

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except OSError as ex:
        print(ex)

if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
```

This Python code will do the same thing as your C++ code. It defines a function `print_file_size` that takes a filename as an argument, attempts to get its size using `os.path.getsize`, and prints the result or any exception message if something goes wrong. The `main` part of the script then calls this function with both `input.txt` (relative path) and `/input.txt` (absolute path).
