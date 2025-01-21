 Here's the equivalent Python code for the provided Golang code:

```python
import os

def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except Exception as e:
        print(e)

def main():
    print_file_size("input.txt")
    print_file_size("/input.txt")

if __name__ == "__main__":
    main()
```

This Python code defines a function `print_file_size` that takes a file path as an argument, checks the size of the file using `os.stat`, and prints it if successful. The `try-except` block handles any exceptions that may occur during the file operation. In the `main` function, we call `print_file_size` twice, once with "input.txt" and once with "/input.txt". Note that on Windows, using an absolute path like "/input.txt" will not work because the OS does not recognize it as a valid drive letter or UNC path. On Unix-like systems, this is fine, but you should be cautious when working across different operating systems.
