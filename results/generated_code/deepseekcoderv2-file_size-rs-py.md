 Here's the equivalent Python code for the given Rust code. This script checks the size of a file named `input.txt` located in both the current working directory and the root of the filesystem:

```python
import os
import sys

def exit_err(msg, code):
    print(f"Error: {msg}", file=sys.stderr)
    sys.exit(code)

def main():
    if len(sys.argv) < 2:
        exit_err("No file name supplied", 1)
    
    file_name = sys.argv[1]
    
    try:
        # Try to get metadata from the current working directory
        cwd_metadata = os.stat(file_name)
        print(f"Size of {file_name} is {cwd_metadata.st_size} bytes")
    except FileNotFoundError:
        pass  # If not found, just move on to check the root directory
    
    try:
        # Try to get metadata from the root (filesystem)
        root_metadata = os.stat("/input.txt" if file_name == "input.txt" else "/"+file_name)
        print(f"Size of {file_name} is {root_metadata.st_size} bytes")
    except FileNotFoundError:
        exit_err(f"{file_name} not found", 2)

if __name__ == "__main__":
    main()
```

This Python script uses the `os` module to get file metadata and handles errors similarly to the Rust version, including custom error handling for missing files. Note that in Python, you can't directly check a file named `input.txt` from the root directory without specifying the full path or using environment-specific paths (which might not be what you want).
