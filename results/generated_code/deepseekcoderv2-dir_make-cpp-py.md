 Here is the Python equivalent of the provided C++ code. This script checks if a directory exists and creates it along with any necessary parent directories if they do not exist. If the directory already exists, it simply returns successfully.

```python
import os

def mkdir_p(path):
    """ Create a directory at the given path, including any missing parents. """
    try:
        os.makedirs(path)
    except FileExistsError:
        # If the directory already exists, do nothing
        pass
    else:
        print(f"Directory {path} created.")

if __name__ == "__main__":
    if len(os.sys.argv) != 2:
        print("usage: python mkdir_p.py <path>")
        os.sys.exit(1)
    
    path_to_create = os.sys.argv[1]
    mkdir_p(path_to_create)
```

### Explanation:
1. **Importing Modules**: The script imports the `os` module, which provides a way to interact with the operating system, including file and directory operations.
2. **Function Definition**: The `mkdir_p` function takes a single argument `path`, which is the path of the directory to be created. It uses `os.makedirs()` to create the directory, including any necessary parent directories. If a directory already exists (`FileExistsError`), it catches this exception and does nothing.
3. **Main Block**: The script checks if exactly one command-line argument is provided (the path to the directory). If not, it prints usage information and exits with an error code. Then, it calls `mkdir_p` with the provided path.

### Usage:
Run this script from the command line by passing a path as an argument:

python mkdir_p.py ./path/to/dir

This will create the directory and any missing parent directories if they do not already exist. If the directory already exists, it will simply return successfully without doing anything.
