In Python, the `os` module provides functions for interacting with the file system. The `shutil` module also includes functions that handle moving files and directories around in a more flexible way than just using `os`. Here's how you would convert your C++ code to Python:

```python
import os
import shutil

# rename files and directories in current working directory
os.rename("input.txt", "output.txt")
shutil.move("docs", "mydocs")

# rename files and directories in the root directory
shutil.move("/input.txt", "/output.txt")
shutil.move("/docs", "/mydocs")
```

Please note that `os.rename()` changes the file name or moves it between directories within the same filesystem, while `shutil.move()` is a bit more flexible - if the destination exists and is not a directory, it is moved into it instead of just being renamed. If there are permissions issues, this could lead to an error.
