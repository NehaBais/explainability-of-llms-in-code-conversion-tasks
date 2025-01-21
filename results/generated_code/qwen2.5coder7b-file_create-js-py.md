You can achieve the same functionality in Python using the `os` and `shutil` modules. Here is your JavaScript code converted to Python:

```python
import os

def handle_error(err):
    if err:
        print(err)

# Create empty file 'output.txt' in current directory and root directory
os.mknod('output.txt', 0o644) # This will create an empty file of size 0 bytes.
handle_error(os.system(f"touch /output.txt"))

# Create empty directory 'docs' in current directory and root directory
os.mkdir('docs')
handle_error(os.system("mkdir /docs"))
```

Please note that the `os.mknod()` function is used to create an empty file, while `os.mkdir()` is used to create a directory. Also, `os.system` is used here for creating files/directories at root level as it directly executes shell commands.
