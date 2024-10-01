Here's how you can convert the Rust code to Python.
Firstly install `os` module in your python environment if it's not already installed: 

```python
import os

# For current working directory
files = ["input.txt", "docs"]
for file in files:
    if os.path.exists(file):
        if os.path.isdir(file):
            print(f'{file} is a directory')
        else:
            print(f'{file} is a file')
    else:
        print(f'{file} does not exist')

# For the filesystem root 
root_files = ["/input.txt", "/docs"]
for file in root_files:
    if os.path.exists(file):
        if os.path.isdir(file):
            print(f'{file} is a directory')
        else:
            print(f'{file} is a file')
    else:
        print(f'{file} does not exist')
```
