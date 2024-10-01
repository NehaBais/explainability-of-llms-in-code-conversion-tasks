The equivalent code in Python would be:

```python
import os

def get_file_size(filename):
    return os.path.getsize(filename)

print(get_file_size('input.txt'))
print(get_file_size('/input.txt'))
```

This code uses the `os.path.getsize()` function in Python to get the size of a file. If the file is not found, it will raise an exception. 

Note that the absolute path (/input.txt) is not usually used because it always refers to the root directory of the system which can be dangerous if not handled properly. It's generally a good idea to use relative paths like 'input.txt'.
