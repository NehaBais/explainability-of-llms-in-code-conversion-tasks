In Python, the `os` module provides a way of using operating system dependent functionality. Here is how you could convert your JavaScript code into Python:

```python
import os

def create_file(directory, file_name):
    with open(os.path.join(directory, file_name), 'w') as file:
        pass  # This will create an empty file

def create_directory(directory):
    os.makedirs(directory)

# Create output.txt in the current working directory
create_file('.', 'output.txt')

# Create output.txt in the filesystem root
create_file('/', 'output.txt')

# Create docs folder in the current working directory
create_directory('./docs')

# Create docs folder in the filesystem root
create_directory('/docs')
```

Note that Python does not have a direct equivalent of JavaScript's `fs.writeFile()` and `fs.mkdir()`, because these are asynchronous functions. The function `os.makedirs(directory)` is used to create directories asynchronously, but there are no callbacks or promises for synchronous file operations.

In Python, the above code does all the same tasks as the original JavaScript code, creating an empty file named "output.txt" of size 0 bytes in both the current working directory and the root filesystem. Additionally, it creates two empty directories named "docs" in both the current working directory and the root filesystem.
