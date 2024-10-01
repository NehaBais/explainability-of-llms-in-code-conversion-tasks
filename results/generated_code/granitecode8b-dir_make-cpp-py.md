Here's the Python code that implements the same functionality as the given C++ code:
```python
import os
def mkdir_p(path):
 if os.path.exists(path):
 return
 try:
 os.makedirs(path)
 except OSError as e:
 # Mask any errors that result from the directory existing
 if e.errno != 17:
 raise
```
The `mkdir_p()` function takes a single path string as an argument and creates all the necessary directories along the given path. If the directory already exists, it returns successfully without doing anything. Otherwise, it attempts to create the directory using the `os.makedirs()` function. If this fails due to any errors other than the directory already existing, it raises an exception.

