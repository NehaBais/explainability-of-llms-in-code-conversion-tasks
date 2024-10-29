In Python you can use the os and errno modules to accomplish this. Here's how you could implement similar functionality in Python:

```python
import os
import errno

def mkdirp(path):
    try:
        os.makedirs(path)
    except OSError as e:
        # If the error was because the last folder didn't exist, return. 
        if e.errno == errno.EEXIST and os.path<｜begin▁of▁sentence｜>():
            pass
        else:
            raise
```
The `os.makedirs()` function in Python will create a directory along with any necessary parent directories which do not already exist. If the directory structure already exists, it won't result in an error. The exception is caught and handled by raising if another type of OS error occurred (other than "directory already exists"). This can be customized as per your requirement.

