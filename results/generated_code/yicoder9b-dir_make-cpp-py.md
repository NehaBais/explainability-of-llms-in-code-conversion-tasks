In Python, you can use the `os` and `stat` standard libraries to achieve similar functionality as follows:

```python
import os
import stat

def mkdir_p(path):
    try:
        # Create a directory
        os.makedirs(path) 
    except OSError as exc:  
        if exc.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else: raise
```
