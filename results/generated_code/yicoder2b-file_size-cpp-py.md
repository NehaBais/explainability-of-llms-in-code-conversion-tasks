The provided code is written in C++ and requires conversion to Python. Note that the filesystem library from C++ Standard Template Library (STL) can be used in a Python environment, but it does not directly support file operations with absolute paths like "/input.txt". 

We would have to import 'os' module in python which provides a way of using operating system dependent functionality such as reading and writing to the user's file system. Here is how you can convert this C++ code into Python:

```python
import os

def print_file_size(filename):
    try:
        if filename[0] == '/':
            raise ValueError('Absolute paths not supported')
        filepath = f"{os.getcwd()}/{filename}"  # Using current working directory 
        print(f'Size of file {filename} is ', os.stat(filepath).st_size, ' bytes.')
    except ValueError as ve:
        print(ve)
    except FileNotFoundError:
        print('File not found in the current working directory.') 
    except Exception as e:
        print(e)

print_file_size('input.txt')
print_file_size('/input.txt')  # This will throw an error because it's using absolute paths which are not supported
```
Note that you need to ensure the Python file is run in a proper environment where 'os' module is available.
