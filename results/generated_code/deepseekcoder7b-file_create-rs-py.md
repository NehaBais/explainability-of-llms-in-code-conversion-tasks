In Python you can use the built-in os and os.path libraries to perform file system operations. Here's how your Rust code translates into Python.

```python
import os
import sys

FILE_NAME = "output.txt"
DIR_NAME  = "docs"

def create(root):
    f_path = os.path.join(root, FILE_NAME)
    d_path = os.path.join(root, DIR_NAME)
    
    if not os.path.exists(d_path):
        os.makedirs(d_path)
        
    if not os.path.isfile(f_path):
        open(f_path, 'w').close()

def error_handler(error, code):
    print(f"Error: {str(error)}", file=sys.stderr)
    sys.exit(code)

try:
    create(".")
    create("/")
except Exception as e:
    error_handler(e, 1)
```
Note that in this Python script we use try/except to handle errors. The equivalent of `unwrap_or_else` function from Rust is handled by the try/except block. If an exception occurs during execution of create() and if there's no except clause for it, then program will terminate with error message displayed on stderr and exit code 1 (as we pass to error_handler).

