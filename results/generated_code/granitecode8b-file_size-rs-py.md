Here's the Python code that does the same thing as the Rust code:
```python
import os
from pathlib import Path
if __name__ == "__main__":
 file_name = sys.argv[1] if len(sys.argv) > 1 else exit_err("No file name supplied", 1)
 file_path = Path(file_name).resolve()
 root_path = Path("/")
 metadata = os.stat(str(root_path / file_path))
 print(f"Size of {file_path} is {metadata.st_size} bytes")
def exit_err(msg, code):
 print(f"Error: {msg}", file=sys.stderr)
 sys.exit(code)
```
This Python code uses the `os` module to get information about a file in the current working directory and another one in the file system root. It also defines a custom function called `exit_err()` that prints an error message to the console and exits the program with a specified code. The `sys` module is used to access the standard error stream (`stderr`).

