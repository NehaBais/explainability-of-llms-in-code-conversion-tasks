Sure, here is the equivalent Python code for your Golang task: 

```python
import os

def createFile(fn):
    open(fn, 'a').close()  # creates a new file with size = 0 bytes
    print('file', fn, 'created!')

def createDir(dn):
    os.makedirs(dn, exist_ok=True) # makes directory
    print('directory', dn, 'created!')

if __name__ == "__main__": 
    createFile("input.txt")
    createFile("/input.txt")
    createDir("docs")
    createDir("/")  # makes root directory, note that this will overwrite the previous "docs" directory
```
This Python code performs the same operation as your original GoLang program: it creates a file and an empty directory twice in the current working directory and filesystem root. However, be aware that if you run this script on a Unix-like system like Linux or macOS, the '/' is not just a path to a directory named "slash"; instead, it refers to the root of the filesystem hierarchy. Therefore, running createDir("/") will overwrite any files or directories in your filesystem root with empty directories.
