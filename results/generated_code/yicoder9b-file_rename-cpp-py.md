In Python the `os` module provides functions for handling file and directory operations including renaming files and directories. 

Here is your C++ code translated to python:

```python
import os

# Rename in current working directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Rename at filesystem root 
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
```

Please note that Python's `os.rename()` function will raise a `FileNotFoundError` if the source file or directory does not exist. Also keep in mind that Python's `os.rename()` can also fail with `NotADirectoryError` if the source is a file and destination is a directory, or vice versa. 

For Windows systems, there is another possibility to handle this which is using `os.rename()` function from `shutil` module which provides a higher level operation on files and directories including renaming them. It will take care of handling file and directory types properly while renaming in different scenarios. 

import shutil

# Rename in current working directory
try:
    shutil.move("input.txt", "output.txt")
except FileNotFoundError:
    print('Source file not found')
except NotADirectoryError:
    print('Destination is a file')
else: 
    print('File renamed successfully in current working directory')  

# Rename at filesystem root
try:
    shutil.move("/input.txt", "/output.txt")
except FileNotFoundError:
    print('Source file not found at filesystem root')
except NotADirectoryError:
    print('Destination is a file at filesystem root')
else: 
    print('File renamed successfully at filesystem root')
