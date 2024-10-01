```python
import os

# Create an empty file in the current working directory
with open("output.txt", "w", encoding="utf-8"):
    pass

# Create an empty directory in the current working directory
os.mkdir("docs", 0o750)

# Create an empty file in the filesystem root
with open("/output.txt", "w", encoding="utf-8"):
    pass

# Create an empty directory in the filesystem root
os.mkdir("/docs", 0o750)
```
