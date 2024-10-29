In Python, we don't need to manually handle file I/O like in C. Instead, we will use the os and os.path libraries for checking whether a directory or file exists. Here is how you can convert your code:

```python
import os

# Check if path is a regular file
def check_reg(path):
    return os.path.isfile(path)

# Check if path is a directory
def check_dir(path):
    return os.path.isdir(path)

def main():
    print("input.txt is a regular file? {}".format("yes" if check_reg("input.txt") else "no"))
    print("docs is a directory? {}".format("yes" if check_dir("docs") else "no"))
    print("/input.txt is a regular file? {}".format("yes" if check_reg("/input.txt") else "no"))
    print("/docs is a directory? {}".format("yes" if check_dir("/docs") else "no"))

if __name__ == '__main__':
    main()
```

This Python script should work in any environment where the os and os.path modules are available, including Windows, Linux, MacOS, etc. The paths "/input.txt" and "/docs" refer to files/directories at the root of your file system, so you might need appropriate permissions to access them (try running with sudo or as an administrator).

