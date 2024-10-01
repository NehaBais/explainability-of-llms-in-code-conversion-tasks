In Python you can use the `os` and `shutil` modules to achieve this. Here is a direct translation of your C program into Python:

```python
import os
import errno
import sys
from posixpath import join, normpath

def maybe_mkdir(s):
    try:
        os.makedirs(normpath(s))
    except OSError as e: 
        # If the directory already exists, ignore it; otherwise raise any error
        if e.errno != errno.EEXIST:
            raise

def main():
    if len(sys.argv) != 2:
        print(f"usage: {sys.argv[0]} <path>", file=sys.stderr)
        sys.exit(1)
    maybe_mkdir(sys.argv[1])

# run the main function when script is started directly
if __name__ == '__main__':
    main()
```
