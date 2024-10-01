```python
import os

def rename_files():
    os.rename('input.txt', 'output.txt')
    os.rename('docs', 'mydocs')

def rename_files_root():
    os.rename('/input.txt', '/output.txt')
    os.rename('/docs', '/mydocs')

rename_files()
rename_files_root()
```
This Python code does the same thing as your Go code: it renames `input.txt` to `output.txt` and `docs` to `mydocs` in the current working directory and also in the filesystem root. The `os.rename()` function is used for renaming files/directories.
