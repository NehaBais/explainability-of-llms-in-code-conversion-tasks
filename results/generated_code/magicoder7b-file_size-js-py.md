 The equivalent code in Python would be:

```python
import os

def file_size(path):
    return os.stat(path).st_size

print("Size of input.txt in current directory: ", file_size('input.txt')) 
print("Size of input.txt in root directory: ", file_size('/input.txt')) # note the use of absolute path here
```
Please remember that this code will only work if the Python script is run from a terminal (command line), and has appropriate permissions to read the files.
