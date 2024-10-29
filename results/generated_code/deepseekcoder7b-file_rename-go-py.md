In Python, you can use the `os` and `shutil` modules to achieve this. The `shutil` module provides a higher-level interface for manipulating files and collections of files (like directories). Here's how your code would look like in python:

```python
import os
import shutil

def rename_files():
    # Rename here, i.e., in the current working directory 
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")
    
    # Rename in filesystem root
    shutil.move("/input.txt", "/output.txt")
    shutil.move("/docs", "/mydocs")
  
if __name__ == '__main__':
    rename_files()
```
This script will run only if this module is executed directly (not imported as a library), thanks to the `if __name__ == '__main__':` guard. If you want to use these functions in some other program, don't include that guard and they will be available for import. Make sure you have required permissions to perform file operations.

