To convert this JavaScript code to Python, you can use the built-in `os` module. Here's how:

```python
import os

# Get file size from current working directory
file_size1 = os.path.getsize('input.txt')
print(f"Size of 'input.txt' in current directory: {file_size1} bytes")

# Get file size from filesystem root (assuming 'c:' is the root)
file_size2 = os.path.getsize('c:/input.txt')
print(f"Size of 'input.txt' at root 'c:/': {file_size2} bytes")
```

This Python code will do the same thing as your JavaScript code: it will get and print the size, in bytes, of a file named `input.txt` located both in the current working directory and in the root directory (assuming 'c:' is the root).
