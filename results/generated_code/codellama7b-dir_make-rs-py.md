```python
import os

def create_dir_all(path: str):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != errno.EEXIST:
            raise

if __name__ == "__main__":
    create_dir_all("./path/to/dir")
```