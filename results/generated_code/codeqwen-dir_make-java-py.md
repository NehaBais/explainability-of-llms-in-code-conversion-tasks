The equivalent code in Python would be:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
        print("Path successfully created")
    except Exception as e:
        print(e)

create_directory("C:/parent/test")
```

The Python `os.makedirs()` function creates the directories specified in the path argument if they don't exist. The `exist_ok=True` parameter is used to suppress the error that would occur if the directory already exists.
