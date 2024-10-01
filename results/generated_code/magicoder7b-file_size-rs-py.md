 In Python, you can use the `os` and `sys` standard libraries to achieve this. Here is an equivalent code snippet in Python:

```python
import os
import sys

def main():
    file_name = sys.argv[1] if len(sys.argv) > 1 else exit_err("No file name supplied", 1)
    try:
        metadata = os.stat(file_name)
        print(f"Size of {file_name} is {metadata.st_size} bytes")
    except FileNotFoundError as e:
        exit_err(e, 2)

def exit_err(msg, code):
    sys.stderr.write("Error: {}\n".format(msg))
    sys.exit(code)

if __name__ == "__main__":
    main()
```
In the above Python code: 
- The `sys` module is used to retrieve command line arguments and exit from the program with a specified error code in case of an exception.
- The `os` module contains functions for file metadata manipulation, including file size retrieval (`st_size`), and for file status retrieval (`stat`). 
- The `try`-`except` block is used to catch potential errors when trying to access a non-existing or inaccessible file. If such an error occurs, the exception will be caught and handled by calling the `exit_err` function with the relevant error message and code.
