Below is the Python equivalent of your Go code:

```python
import os
import stat

def create_file(fn):
    try:
        with open(fn, 'w') as f:
            pass
        print("File", fn, "created!")
    except Exception as e:
        print(e)
        return

def create_dir(dn):
    try:
        os.mkdir(dn, mode=stat.S_IRWXU|stat.S_IRGRP|stat.S_IRWXO))
        print("Directory", dn, "created!")
    except Exception as e:
        print(e)
        return

def main():
    create_file("input.txt")
    create_file("/input.txt")
    create_dir("docs")
    create_dir("/docs")

if __name__ == "__main__":
    main()
```

This Python script performs the same operations as your Go code, i.e., creating a file named `input.txt`, and two more files namely `/input.txt` and a directory named `docs`. The directories are created with permissions set for read, write and execute by both the user and group. The directories `docs` and `/docs` are created in the root directory of the filesystem.
