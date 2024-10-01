The equivalent Python code for the given Java code is:
```python
import os

def main():
    fileA = "/home/user/input.txt" if os.path.exists("/home/user/input.txt") else "file.txt"
    print('%,d B' % (os.path.getsize(fileA)))

    fileB = "/usr/share/doc/file.txt" if os.path.exists("/usr/share/doc/file.txt") else "/file.txt"
    print('%,d B' % (os.path.getsize(fileB)))

if __name__ == "__main__":
    main()
``` 
Please note that in Python you don't have to import a library like in Java, because the `os` and `sys` libraries are automatically imported when running a python script. This also includes functionality for file manipulation like getting the size of a file or checking if a file exists.
