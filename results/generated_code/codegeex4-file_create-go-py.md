```python
import os

def create_file(fn):
    with open(fn, 'w') as f:
        pass
    print("file", fn, "created!")

def create_dir(dn):
    try:
        os.mkdir(dn)
    except FileExistsError:
        pass
    print("directory", dn, "created!")

if __name__ == "__main__":
    create_file('output.txt')
    create_dir('docs')

    create_file('/output.txt')
    create_dir('/docs')
```
Please note that writing to the filesystem root (`/`) usually requires elevated permissions and might not be allowed on all systems. If you're running this script on a system where you don't have permission, it'll raise an error. You may need to run your Python script with administrator/sudo rights.
