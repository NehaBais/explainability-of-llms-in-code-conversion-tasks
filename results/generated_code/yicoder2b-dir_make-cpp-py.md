Sure, the provided C++ code creates a directory and any necessary parent directories if they do not already exist.

Here is how this can be converted to Python using the `os` module:

```python
import os

def mkdir(path):
    try:
        os.makedirs(path)
        return 0  # success code
    except OSError as e:
        print('couldn\'t create directory:', path)
        return -1  # failure code
```
This function `mkdir` takes a string argument for the path to the directory. If the directory does not exist, it will be created using the built-in Python function `os.makedirs()`. If this fails due to an existing directory or file at the specified path, an error message will be printed and the function will return -1.

Please make sure you are running this code with enough permissions. 

The `os.makedirs` function attempts to create all non-existent parent directories in the path. If this fails (for example if a file with that name already exists at one of the intermediate locations), an exception is thrown and caught, and the function will return -1.
