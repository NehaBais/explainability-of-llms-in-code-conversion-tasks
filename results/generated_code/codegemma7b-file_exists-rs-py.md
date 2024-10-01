```python
import os

files = ["input.txt", "docs", "/input.txt", "/docs"]

for file in files:
    if os.path.exists(file):
        if os.path.isdir(file):
            print(f"{file} is a directory")
        else:
            print(f"{file} is a file")
    else:
        print(f"{file} does not exist")
```
