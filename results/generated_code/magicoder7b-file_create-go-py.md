 The equivalent Python code would be:

```python
import os

def create_file(fn):
    try:
        f = open(fn, 'w')
        print("File", fn, "created!")
        f.close()
    except IOError as e:
        print(e)

def create_dir(dn):
    try:
        os.makedirs(dn, 0o755)
        print("Directory", dn, "created!")
    except OSError as e:
        print(e)

create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")
```
This code does the same job as your GoLang code - it creates a new empty file called "input.txt" and an empty directory called "docs". This is done twice, once in the current working directory (where you run this Python script) and once at the root of the filesystem.
