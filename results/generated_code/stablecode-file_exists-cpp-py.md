Below is the equivalent Python code for the given C++ code:

```python
import os

def file_exists(path): 
    print(path)
    if os.path.exists(path):
        if os.path.isfile(path):
            print(" exists with a file size of {} bytes.".format(os.path.getsize(path))))
        else:
            print(" is a directory")
    else:
        print(" does not exist")

# Usage examples 
file_exists("input.txt") 
file_exists("zero_length.txt") 
file_exists("docs/input.txt")  
file_exists("docs/zero_length.txt") 
```
In this Python code, the `os` module is imported to interact with the operating system and its associated functions such as file checking. 

The function `file_exists(path)` takes a path argument as input. It first checks if the given path exists in the filesystem using the `os.path.exists()` function. If it exists, it then checks if it is a directory using the `os.path.isfile()` function. If the path is indeed a file, it then prints its size in bytes using the `os.path.getsize()` function.

The code uses multiple print statements to display relevant information about the file at the given path.

At the end of the script, there are usage examples for each of the four paths that are checked in the C++ version of this code.
