In Python, you can use the `os` module to get file information such as size. Here is how we could convert your C++ code:

```python
import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as e:
        print(e)

if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
```
This Python code does essentially the same thing as your C++ code - it gets and prints out the size of two different files, which are also specified in `main()` function call. Note that Python uses f-strings to embed variables inside string literals (f"Size of file {filename} is ...") while C++ uses stream insertion operator (`<<`).
