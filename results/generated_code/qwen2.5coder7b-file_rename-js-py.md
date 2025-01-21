You can achieve the same functionality in Python using the `os` and `shutil` modules. Here is your JavaScript code converted to Python:

```python
import os
import shutil

# Current working directory
current_dir = os.getcwd()

# Moving files
for filename in ["input.txt", "c:/input.txt"]:
    if os.path.exists(filename):
        shutil.move(filename, current_dir + "/output.txt")

# Moving directories
for foldername in ["docs", "c:/docs"]:
    if os.path.exists(foldername):
        shutil.move(foldername, current_dir + "/mydocs")
```

This Python script will move the files and directories as specified. Note that `os.getcwd()` returns the current working directory, and `shutil.move()` is used to move files or directories in Python.

Also, remember to handle exceptions if your script might encounter permission errors or file/directory does not exist.
