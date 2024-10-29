The Python code for the same is as follows, using `os` and `os.path` modules to accomplish this task. The directory separator used in paths are forward slashes (/) because these work on all platforms (Windows, Linux, macOS). 

```python
import os

def file_exists(path):
    print(path)
    
    if os.path.exists(path):
        if os.path.isdir(path):
            print(" is a directory")
        else:
            print(" exists with a file size of", os.path.getsize(path), "bytes.")
    else:
        print(" does not exist")

# Run the function for current working directory and root filesystem
file_exists('input.txt')
file_exists('/input.txt') # For the root filesystem
```
For getting the location of root file system in Python, it's hard as different systems have different meanings behind "root" directories like "/", "C:\\". In this code, we are checking for files at two places i.e., current working directory (where your python script resides) and "/" which is the root filesystem of UNIX-based system but not windows. You can change it as per your requirements.

