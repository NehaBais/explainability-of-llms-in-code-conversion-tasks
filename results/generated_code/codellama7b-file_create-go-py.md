 Here is the Python code that should accomplish the same task as the Go code:
```
import os

def create_file(fn):
    try:
        with open(fn, "wb"):
            pass
    except OSError as e:
        print("Error creating file", fn, ":", e)
    else:
        print("File", fn, "created!")

def create_dir(dn):
    try:
        os.mkdir(dn, 0o666)
    except OSError as e:
        print("Error creating directory", dn, ":", e)
    else:
        print("Directory", dn, "created!")

if __name__ == '__main__':
    create_file("input.txt")
    create_file("/input.txt")
    create_dir("docs")
    create_dir("/docs")
```
