## Answer:

Here is the Python code that performs similar functionality:

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as ex:
        print(str(ex))

print_file_size("input.txt")
print_file_size("/input.txt")
```

The main difference between the C++ and Python code is that in Python, we use `os` module to get file size instead of using `std::filesystem`. Also note that paths are handled differently: while in C++, absolute path must be passed as arguments, it can also be inferred from current working directory for relative paths.

