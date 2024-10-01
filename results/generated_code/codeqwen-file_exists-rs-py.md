The equivalent code in Python would be:

```python
import os

for file in ["input.txt", "docs", "/input.txt", "/docs"]:
    if os.path.exists(file):
        if os.path.isdir(file):
            print(f"{file} is a directory")
        else:
            print(f"{file} is a file")
    else:
        print(f"{file} does not exist")
```

In this Python code, we use the os module to check for the existence of files and directories. We iterate over a list of filenames and use `os.path.exists()` to determine if each file or directory exists. If it exists, we use `os.path.isdir()` to check if it's a directory. If so, we print that it is a directory. Otherwise, we assume it's a file. If the file does not exist, we print a message saying so.
