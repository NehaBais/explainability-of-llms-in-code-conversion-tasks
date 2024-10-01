This is how the code would look in Python:

```python
import os
from pathlib import Path


def print_stat(p):
    try:
        i = os.stat(p)
        if os.path.isdir(p):
            print(f"{p} is a directory")
        else:
            print(f"{p} is a file")
    except FileNotFoundError as e:
        print(e)


if __name__ == "__main__":
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")
```

Note that the `os.Stat` in Golang is equivalent to the `os.path.getsize` function in Python, and there's no direct translation for `i.IsDir`. Instead, you can check if a file exists using the `os.path.exists` function. So I've modified your `print_stat` function in Python to reflect this approach.

Also note that Python uses forward slashes (`/`) for its path separators, not backslashes as in Windows. This may affect some of the paths used in the code. If you're dealing with a Windows system and need to use Windows-style paths, you can use `os.path` functions to achieve this.
