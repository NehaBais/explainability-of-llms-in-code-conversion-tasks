 The equivalent code in Python would be:

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print("Size of file", filename, "is", size, "bytes")
    except Exception as ex:
        print(ex)

print_file_size("input.txt")
print_file_size("/input.txt")
```
The `os.path.getsize` function in Python returns the size of a file, and it works similar to `std::filesystem::file_size` in C++. The try-except block is also used in Python for exception handling.
