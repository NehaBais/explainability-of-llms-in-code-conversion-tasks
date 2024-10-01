The equivalent Python code for the given C code would be:

```python
import os

file1 = "input.txt"
file2 = "/input.txt"

try:
    size1 = os.stat(file1).st_size
    print(size1)
except FileNotFoundError:
    print("File", file1, "does not exist")

try:
    size2 = os.stat(file2).st_size
    print(size2)
except FileNotFoundError:
    print("File", file2, "does not exist")
```

This Python code uses the `os` module to get the size of files. The `os.stat()` function returns a tuple containing information about the file, and `st_size` is an attribute of the returned tuple that contains the size of the file in bytes.

The `try/except` block is used to handle potential errors such as if the file doesn't exist, which will raise a `FileNotFoundError` exception. The print statements output the sizes of the files or error messages indicating that the files do not exist.
