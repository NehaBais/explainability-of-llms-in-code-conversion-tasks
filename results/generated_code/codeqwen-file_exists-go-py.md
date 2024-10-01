The equivalent code in Python would be:

```python
import os

def print_stat(p):
    try:
        i = os.stat(p)
        if i.st_mode & os.S_ISDIR():  # Check if it is a directory
            print(f"{p} is a directory")
        else:
            print(f"{p} is a file")
    except FileNotFoundError as e:  # Catch the error when the file/directory doesn't exist
        print(e)

if __name__ == "__main__":
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")
```
Please note that `os.S_ISDIR()` function is used in Python to determine whether a path refers to a directory.
