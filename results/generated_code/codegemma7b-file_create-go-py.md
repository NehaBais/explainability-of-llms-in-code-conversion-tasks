```python
import os

def create_file(fn):
    try:
        f = open(fn, "w")
        print(f"file {fn} created!")
        f.close()
    except Exception as e:
        print(e)

def create_dir(dn):
    try:
        os.mkdir(dn)
        print(f"directory {dn} created!")
    except Exception as e:
        print(e)

create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")
```

