The Python version of the code you provided would look like this, using built-in os and errno modules for cross-platform compatibility and error handling. 

```python
import os
import errno

def mkdir_p(path):
    try:
        os.makedirs(path)
    except OSError as exc:  
        if exc.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else:raise

mkdir_p("./path/to/dir")
```
This Python function attempts to create the directory at the given path, with any missing parents. It will handle exceptions for cases where a file already exists (EEXIST), or it doesn't have necessary permissions etc., and will only raise if different error occurs. The makedirs() method is capable of creating a nested directory structure unlike mkdir –p command in *nix systems.

