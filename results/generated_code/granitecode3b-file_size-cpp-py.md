Here's the Python code that performs the same task as the C++ code:
```python
import os
import sys
import filesize
def print_file_size(filename):
    try:
        size = filesize.size(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as ex:
        print(f"{ex}")
if __name__ == "__main__":
    current_working_directory = os.getcwd()
    print_file_size("input.txt")
    root_directory = "/"
    print_file_size(os.path.join(root_directory, "input.txt"))
```
In this Python code, we first import the necessary modules: `os` for working with the file system, `sys` for accessing the current working directory, and `filesize` for getting the size of a file. We then define a function `print_file_size` that takes a filename as an argument. Inside the function, we use the `filesize` module to get the size of the file and print it out. If an exception occurs during the process, we catch it and print the error message instead.
In the `if __name__ == "__main__":` block, we first get the current working directory using `os.getcwd()`. We then call the `print_file_size` function twice, once with the filename "input.txt" in the current working directory and once with the filename "/input.txt" in the file system root.

