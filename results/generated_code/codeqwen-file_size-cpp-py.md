The equivalent code in Python would be:

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} Is {size} bytes.")
    except OSError as ex:
        print(ex)

print_file_size("input.txt")
print_file_size("/input.txt")
```

In this Python code, we're using the `os.path.getsize()` function to get the size of a file in bytes. The `try-except` block is used to handle any potential OSError exceptions that might occur if the file doesn't exist or can't be accessed for some other reason.
