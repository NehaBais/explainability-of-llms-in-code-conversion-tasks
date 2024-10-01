The equivalent code in Python would be:

```python
import os

def get_file_size(filename):
    if os.path.exists(filename):
        return os.path.getsize(filename)
    else:
        return "File does not exist"

# current working directory
print("Size of file in current directory (input.txt): ", get_file_size('input.txt'))

# root directory
print("Size of file in root directory (/input.txt): ", get_file_size('/input.txt'))
```

This Python code uses the `os` module to check if a file exists and, if it does, obtain its size using the `getsize()` function. The sizes are printed in bytes, but they are formatted with commas for readability using the `printf` style formatting (note that Python has no built-in equivalent).
