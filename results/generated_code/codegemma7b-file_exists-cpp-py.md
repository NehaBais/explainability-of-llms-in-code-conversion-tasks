```python
import os
import pathlib

def file_exists(path):
    path = pathlib.Path(path)
    if path.exists():
        if path.is_dir():
            print(f"{path} is a directory")
        else:
            print(f"{path} exists with a file size of {path.stat().st_size} bytes.")
    else:
        print(f"{path} does not exist")

if __name__ == "__main__":
    file_exists("input.txt")
    file_exists("zero_length.txt")
    file_exists("docs/input.txt")
    file_exists("docs/zero_length.txt")
```

