The equivalent of `os.MkdirAll` in Python is to use `os.makedirs`. This function creates a directory and all parent directories it does not already exist. 

Here's how you can implement this:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path, mode=0o770)
        print(f"Directory '{path}' created successfully")
    except FileExistsError:
        print(f"Directory '{path}' already exists")

# Example usage:
create_directory('./path/to/dir')
```

In the code above, `os.makedirs` is used to create the directory specified by `path`. The `mode=0o770` parameter sets the permissions for the directory. If the directory already exists, a `FileExistsError` will be raised and the function will print a message indicating that the directory already exists.

Note: This solution assumes that the path is passed as a string with the current working directory prepended to it (./).
