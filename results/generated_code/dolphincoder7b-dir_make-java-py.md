To convert the Java code to Python, we can use the pathlib library:
```python
from pathlib import Path

def create_directory(path):
    dir = Path(path)
    if not dir.exists():
        dir.mkdir(parents=True, exist_ok=True)
```
In this solution, `Path` is used to create a directory. The method `mkdir()` creates the directory and its parents if necessary, using the `exist_ok` parameter. If the directory already exists, it doesn't throw an error.
