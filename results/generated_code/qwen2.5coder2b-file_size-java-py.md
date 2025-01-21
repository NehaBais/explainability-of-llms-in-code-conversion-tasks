In Python, the equivalent code would be:

```python
import os

# Path to the current working directory file
current_directory_file = "file.txt"

# Calculate and print the size of the file in bytes
print(f"{os.path.getsize(current_directory_file):,d} B")

# Path to a file in the root directory
root_directory_file = "/file.txt"

# Calculate and print the size of the file in bytes
print(f"{os.path.getsize(root_directory_file):,d} B")
```

Please note that in Python, `os.path.getsize()` function is used to get the size of a file.
