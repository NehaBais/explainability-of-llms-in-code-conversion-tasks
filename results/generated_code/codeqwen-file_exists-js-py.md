The equivalent Python code for the JavaScript code you provided would be as follows:

```python
import os

# Check current working directory
print(os.path.isfile('input.txt') and os.path.isdir('docs'))

# Check filesystem root (Note that os.getcwd() gets the current working directory)
root_directory = '/'
print(os.path.isfile(f'{root_directory}input.txt') and os.path.isdir(f'{root_directory}docs'))
```

Please note that `os.path.isfile()` checks if a file exists, and `os.path.isdir()` checks if a directory exists. The 'c:/' is not required in Python, as it will check the current working directory by default unless you specify another path.
