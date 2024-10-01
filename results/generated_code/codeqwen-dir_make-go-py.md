In Python, you can use the `os` module to achieve this, as follows:

```python
import os

def mkdir_p(path):
    try:
        os.makedirs(path)
    except FileExistsError:
        pass
    else:
        print("Directory created successfully")

# Example usage
mkdir_p("/tmp/some/path/to/dir")
```

This function will attempt to create the directory specified by `path`. If the directory already exists, it will do nothing and return immediately. If the directory does not exist, it will be created with the permissions specified by the second argument (in this case, `0770`). The function returns None in all cases.
