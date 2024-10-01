The equivalent code in Python would be:

```python
import os

def create_files():
    try:
        with open('output.txt', 'w'):
            pass
        os.mkdir('docs')
        with open(os.path.join(os.sep, 'output.txt'), 'w'):
            pass
        os.mkdir(os.path.join(os.sep, 'docs'))
    except IOError as e:
        print("I/O error({0}): {1}".format(e.errno, e.strerror))

create_files()
```

In Python, file and directory creation is handled by the `open()` function for files and the `mkdir()` method for directories respectively. The 'w' mode for `open()` function will create a new empty file (or overwrite the existing one if it exists) if it does not already exist.
