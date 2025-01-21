Sure, here's the equivalent code in Python:

```python
import os

def check_file_or_directory(file_or_dir):
    if os.path.exists(file_or_dir):
        if os.path.isdir(file_or_dir):
            print(f"{file_or_dir} is a directory")
        else:
            print(f"{file_or_dir} is a file")
    else:
        print(f"{file_or_dir} does not exist")

# Check for the current working directory and its root
check_file_or_directory('input.txt')
check_file_or_directory('docs')
check_file_or_directory('/input.txt')
check_file_or_directory('/docs')
```

This Python script uses the `os` module to check if a file or directory exists and determine whether it is a file or a directory. The function `check_file_or_directory` is called for each of the specified paths: `input.txt`, `docs`, `/input.txt`, and `/docs`.
