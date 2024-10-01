Below is the equivalent Python code for creating a directory and any missing parents. 

This function uses the os and os.path modules which are part of the standard Python library.

```python
import os

def create_directory(dir_name):
    try:
        os.mkdir(dir_name)
    except FileExistsError as e:
        pass  # If directory already exists, just return successfully
    except OSError as e:
        print("Creation of the directory %s failed due to: %s" % (dir_name, e)))
```

This function accepts a single path string and creates the directory if it doesn't exist already. This is done by using os.mkdir() method which will create directories if they don't already exist. 

If the directory already exists, then this function just returns successfully without doing anything else.
