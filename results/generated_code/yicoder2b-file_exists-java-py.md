Sure, here's how you can do it in Python:

```python
import os

def verify_file_exists(file_path):
    return os.path.isfile(file_path)

print(verify_file_exists('docs/input.txt'))
print(verify_file_exists('/docs/input.txt'))
```
This Python code will check if the file exists based on whether it's a local file or an absolute path. The `os` module in Python provides functions for interacting with the operating system, including checking file existence.
