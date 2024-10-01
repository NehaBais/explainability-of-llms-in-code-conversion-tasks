 In Python, you can use the `os` and `os.path` modules to achieve this. Here is how you would implement that in a similar way as in your C code:

```python
import os

def check_reg(path):
    return os.path.isfile(path)

def check_dir(path):
    return os.path.isdir(path)

print("input.txt is a regular file? " + ("yes" if check_reg('input.txt') else "no"))
print("docs is a directory? " + ("yes" if check_dir('docs') else "no"))
print("/input.txt is a regular file? " + ("yes" if check_reg('/input.txt') else "no"))
print("/docs is a directory? " + ("yes" if check_dir('/docs') else "no"))
```
Please note that `/input.txt` and `/docs` are absolute paths that start from the root of the filesystem, not relative to the current working directory or the script's location.
