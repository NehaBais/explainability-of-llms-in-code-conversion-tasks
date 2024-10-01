In Python, you can use the `os` module to access file and directory information. Here is a conversion of your C++ code.

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as ex:
        print(ex)

if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
```

Please note that the above Python code may raise a `FileNotFoundError` exception if the file "input.txt" does not exist in the current working directory or root. This is similar to the behavior of `std::filesystem::file_size` when it cannot find the specified file in C++.
