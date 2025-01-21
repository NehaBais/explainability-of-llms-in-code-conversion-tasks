The equivalent code in Python would be:

```python
import os

def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" is a directory")
        else:
            print(f" exists with a file size of {os.path.getsize(path)} bytes.")
    else:
        print(" does not exist")

if __name__ == "__main__":
    file_exists("input.txt")
    file_exists("zero_length.txt")
    file_exists("docs/input.txt")
    file_exists("docs/zero_length.txt")
```
This Python code first imports the `os` module which provides a portable way of using operating system dependent functionality. It then defines the function `file_exists()` which takes a path as input and prints it, checks whether the file exists, and if it does, it further checks whether the file is a directory or a regular file and prints size if applicable.
In the `main()` function, it calls the `file_exists()` function for all files and directories mentioned in your C++ code.
