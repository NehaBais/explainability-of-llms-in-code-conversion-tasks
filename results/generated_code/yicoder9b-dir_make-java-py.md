In Python, the `os` and `os.path` libraries has functions that can be used to create a directory with all missing parent directories:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
    except Exception as e:
        print(str(e))

if __name__ == "__main__":
    create_directory("C:/parent/test")
```
The `exist_ok` parameter in the `os.makedirs()` function is set to True, which allows the method to not throw an exception if the directory already exists (`exist_ok=True`). The entire path will be created if it doesn't exist and if any of the intermediate directories don’t exist they would also be created (this is what `os.makedirs()` does). If there was a problem while creating this path, an exception message is printed out.
