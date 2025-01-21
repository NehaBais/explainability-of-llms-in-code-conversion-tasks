Sure, here's the equivalent Python code for your requirements:

```python
import os

def check_file(path):
    return os.path.isfile(path)

def check_directory(path):
    return os.path.isdir(path)

if __name__ == "__main__":
    print("input.txt is a regular file? ", end="")
    if check_file("input.txt"):
        print("yes")
    else:
        print("no")

    print("\ndocs is a directory? ", end="")
    if check_directory("docs"):
        print("yes")
    else:
        print("no")

    print("\n/input.txt is a regular file? ", end="")
    if check_file("/input.txt"):
        print("yes")
    else:
        print("no")

    print("\n/docs is a directory? ", end="")
    if check_directory("/docs"):
        print("yes")
    else:
        print("no")
```

This code uses the Python standard library `os` to determine if a path corresponds to a file or a directory, and prints out whether it is regular or not. The main function checks these conditions for both current working directory and filesystem root.
