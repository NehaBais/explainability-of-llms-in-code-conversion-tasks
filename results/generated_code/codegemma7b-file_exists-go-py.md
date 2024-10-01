```python
import os
import sys

def print_stat(p):
    try:
        i = os.stat(p)
        if i.is_dir():
            print(p, "is a directory")
        else:
            print(p, "is a file")
    except Exception as e:
        print(e)

print_stat("input.txt")
print_stat("/input.txt")
print_stat("docs")
print_stat("/docs")
```

