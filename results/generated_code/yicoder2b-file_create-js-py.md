The equivalent Python code for the given JavaScript code would be:

Python Code:
```python
import os

def fct(err):
    if err: print(err)

os.write('output.txt', b'') # Python does not have bytes in its write method as JS
os.write('/output.txt', b'') # Same for Python

os.mkdir('docs')  # Directories are created using mkdir() method in python 
os.mkdir('/docs', 0o777) # Same thing here
```
Please note that the Python `write` function is used to write bytes into a file rather than characters like JavaScript's `fs.writeFile()`. Also, Python `mkdir()` method is used to create directories as it does not return an error object in the same way as JavaScript's `fs.mkdir()`.
