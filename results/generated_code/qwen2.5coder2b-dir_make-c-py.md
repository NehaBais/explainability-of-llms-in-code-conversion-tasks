The equivalent code in Python is as follows:

```python
import os

def mkdir_p(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno == os.error.EEXIST:
            pass
        else:
            raise e

if __name__ == '__main__':
    import sys
    if len(sys.argv) != 2:
        print('Usage: %s <path>' % sys.argv[0])
        sys.exit(1)
    mkdir_p(sys.argv[1])
```
In the above code, `os.makedirs(path)` is used to create a directory and its parent directories if they do not exist. If an error occurs (for example, if directory already exists), it will be caught by the except block and handled accordingly.
