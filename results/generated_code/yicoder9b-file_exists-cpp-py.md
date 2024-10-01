Sure, here is the Python equivalent of your C++ code using `os` and `pathlib` modules:

```python
import os
from pathlib import Path

def file_exists(path):
    print(path)
    if os.path.exists(path):
        if os.path.isdir(path):
            print(' is a directory')
        else:
            print(f' exists with a file size of {os.path.getsize(path)} bytes.') 
    else:
        print(' does not exist')

# for the current working directory
file_exists('input.txt')
file_exists('zero_length.txt')
file_exists('docs/input.txt')
file_exists('docs/zero_length.txt')

# for a file and directory in the filesystem root
if os.path.isdir('/some_root_directory'):    # Check if the root directory exists. Replace '/some_root_directory' with your actual root directory
    os.chdir('/some_root_directory')     # Change to that root directory
    file_exists('input.txt')
    file_exists('zero_length.txt')
    file_exists('docs/input.txt')
    file_exists('docs/zero_length.txt')
else: 
    print("The specified directory does not exist!")
```

Please note that Python's os and pathlib modules are used for file operations, while C++17's filesystem library is used in your code. Also note the use of f-string to format string containing file size in bytes. 

Also replace '/some_root_directory' with your actual root directory you want to access.
