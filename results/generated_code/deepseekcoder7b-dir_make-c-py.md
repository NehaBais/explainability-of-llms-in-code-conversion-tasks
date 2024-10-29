The Python version of the code can be written as follows using the `os` and `errno` modules for handling file operations. 

This Python script first checks if a directory exists, if not it creates one recursively by splitting the path at each level ('/') from the start.

```python
import os
import errno

def mkdir_p(path):
    try:
        os.makedirs(path)
    except OSError as exc:  # Python <= 2.5
        if exc.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else:
            raise
```

The function `mkdir_p` takes a path name string and creates the directory it does not exist. The EEXIST error is raised if the directory already exists, so it just passes by. 

If you run this script from a different python file like below :-

import mkdir_module  # assuming the above function is in "mkdir_module"

mkdir_module.mkdir_p('./path/to/dir')

This code would create 'path' and 'dir' if they didn't exist already, but it wouldn't do anything if both existed. It also behaves correctly across platforms as the os module is built into python. 

Please remember to replace `mkdir_module` with your actual name of the file where you defined this function in above code snippet.

