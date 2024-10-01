Here is the Python equivalent of your C code:

```python
import os

# create file in current directory
open('output.txt', 'w').close()
os.chmod('output.txt', 0o640)  # permissions rw-r-----

# create empty directory
os.mkdir('docs', mode=0o750)   # rights rwxr-x---

# create file in filesystem root (assumed to be '/')
open('/output.txt', 'w').close()
os.chmod('/output.txt', 0o640)  # permissions rw-r-----

# create empty directory in filesystem root
os.mkdir('/docs', mode=0o750)   # rights rwxr-x---
```
Note: This assumes that you have the appropriate permissions to create files and directories in both the current working directory and the filesystem root. You may need to adjust the paths or the file/directory names according to your specific requirements. Also, ensure Python has access to OS module for these functions to work properly.
