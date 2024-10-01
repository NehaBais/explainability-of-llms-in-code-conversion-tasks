```python
import os

def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except Exception as e:
        print(e)

print_file_size("input.txt")
print_file_size("/input.txt")
```
