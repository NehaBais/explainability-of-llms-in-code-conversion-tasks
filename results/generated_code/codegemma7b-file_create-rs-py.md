```python
import os
from pathlib import Path

FILE_NAME = "output.txt"
DIR_NAME = "docs"

def create(root: str) -> None:
    file_path = Path(root) / FILE_NAME
    dir_path = Path(root) / DIR_NAME
    os.makedirs(dir_path, exist_ok=True)
    open(file_path, "w").close()

if __name__ == "__main__":
    create(".")
    create("/")
```
