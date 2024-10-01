 The equivalent code in Python would be:

```python
import os

def get_file_size(filename):
    return os.path.getsize(filename)

print(get_file_size("input.txt"))
print(get_file_size("/input.txt"))
```

This Python code uses the `os.path.getsize()` function to get the size of a file. This is equivalent to the C `stat` system call. Note that the path separator "/" is automatically used in Python, so there's no need for you to specify it.
