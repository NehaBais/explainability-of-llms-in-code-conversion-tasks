Sure, here is the equivalent code in Python:

```python
import os
import pathlib
from filesystems import filesystem 

def file_exists(path):
    if isinstance(path, str):
        path = pathlib.Path(path)

    print(f'Testing {str(path)}')
    if path.is_absolute():
        print('Full path: ' + str(path))
    else:
        print('Relative path: ' + str(path))
        
    if os.path.exists(str(path)):
        if filesystem.is_directory(path):
            print('Exists and is a directory')
        elif filesystem.file_size(path) > 0 :
            print('Exists with file size of ' + str(filesystem.file_size(path)) + ' bytes')
    else:
        print('Does not exist')
  

# Test it
file_exists('/input.txt') # absolute path
file_exists('input.txt')  # relative path
file_exists('/zero_length.txt')
file_exists('docs/input.txt') 
file_exists('docs/zero_length.txt')
```
This Python code does the same thing as your original C++ code. It checks to see if a file or directory exists in both current working directory and filesystem root.
