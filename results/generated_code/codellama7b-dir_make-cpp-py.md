```
import os
import sys
from pathlib import Path

def mkdir_p(path):
    """Create a directory and any missing parents."""
    path = Path(path)
    if path.exists():
        return 0
    else:
        try:
            os.makedirs(path)
        except OSError as e:
            print("couldn't create directory", path, file=sys.stderr)
            return -1
    return 0

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("usage: mkdir <path>", file=sys.stderr)
        sys.exit(-1)

    path = Path(sys.argv[1])
    rc = mkdir_p(path)
    if rc != 0:
        sys.exit(rc)
```
This code will convert the C++ code into Python and create a directory and any missing parents. The function `mkdir_p` takes a single path string as an argument and creates the directory if it does not exist. If the directory already exists, the function returns successfully with a return value of 0. If there is an error creating the directory, the function will print an error message to standard error and exit with a non-zero return value. The code also includes a check for the number of command line arguments passed to the program, which must be 2 for the function to work correctly.
