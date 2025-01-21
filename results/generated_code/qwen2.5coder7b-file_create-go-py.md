Here is the equivalent Python code for your Golang code:

```python
import os

def create_file(fn):
    try:
        open(fn, 'w').close()
        print(f"file {fn} created!")
    except Exception as e:
        print(e)

def create_dir(dn):
    try:
        os.mkdir(dn)
        print(f"directory {dn} created!")
    except Exception as e:
        print(e)

def main():
    create_file("input.txt")
    create_file("/input.txt")
    create_dir("docs")
    create_dir("/docs")

if __name__ == "__main__":
    main()
```

This Python code does the same thing as your Golang code, creating empty files and directories in both the current working directory and the filesystem root. 

Please note that you need to be careful when running this script with write permissions on directories and file systems you do not own. Also, note that in most Unix-like systems (Linux, MacOS), `/input.txt` and `/docs` will require superuser privileges to create.
