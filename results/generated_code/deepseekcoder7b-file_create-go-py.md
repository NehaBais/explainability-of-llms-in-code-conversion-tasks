In Python we can use the built-in `open` function to handle file creation, and `os.mkdir` for directory handling. 

Here's how you could translate that Golang code into Python:

```python
import os

def create_file(fn):  
    try:
        with open(fn, 'w') as fp:
            pass # file is created but since it's empty we do nothing here. 
        print("File", fn, "created!")
    except IOError as e:
        print(e)
        
def create_dir(dn):  
    try:
        os.mkdir(dn)
        print("Directory", dn, "created!")
    except OSError as e:
        print(e)

if __name__ == "__main__":
    create_file("output.txt")  # in the current working directory
    create_file("/output.txt") # at filesystem root (might require sudo depending on permissions)
    create_dir("docs")  
    create_dir("/docs")  # at filesystem root (might require sudo depending on permissions)
```
Please note that Python uses `/` as the file separator, so creating a new file in the root directory would probably not be possible unless you have write permission. Creating files or directories in other locations generally requires administrative privileges. Also, if you are trying to create a file at the root of your filesystem ("/"), it might require superuser permissions which may cause issues and should be avoided if possible for security reasons.

