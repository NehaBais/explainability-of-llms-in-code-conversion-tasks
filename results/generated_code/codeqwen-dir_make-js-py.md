Here's a Python version of your JavaScript code using os.makedirs from the os module which creates the directory and its parents:

```python
import os

def mkdirp(path):
    try:
        os.makedirs(path)
    except FileExistsError:  # If the directory already exists, do nothing
        pass
```
The try/except block is used to handle the scenario when the directory already exists and doesn't need to be created again.
