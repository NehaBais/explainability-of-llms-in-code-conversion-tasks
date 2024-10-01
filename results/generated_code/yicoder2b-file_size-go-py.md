The provided code is written in Golang and needs to be translated into Python. Here's how you can accomplish this:

Python Code:
```python
import os
from stat import *

def print_file_size(filename):
    stat, err = os.stat(filename)
    if err != None:
        print (err)
    else:
        print (stat.st_size)

print_file_size("input.txt")
try:
  print_file_size("/input.txt")
except FileNotFoundError as e:
  print('File not found:', str(e))
```
This Python script does the same task as the Golang code, it tries to get file size for two files (one in current directory and one at root level). If any error happens during this operation (like permission denied or non-existing file/folder) it will print an appropriate error message.
