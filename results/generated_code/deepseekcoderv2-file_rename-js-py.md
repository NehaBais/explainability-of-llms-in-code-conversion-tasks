 Here's the equivalent Python code to achieve the same functionality:

```python
import os

# Function to rename a file in the current working directory
def move_file(old_name, new_name):
    if os.path.exists(old_name):
        os.rename(old_name, new_name)

# Function to rename a folder in the current working directory
def move_folder(old_name, new_name):
    if os.path.isdir(old_name):
        os.rename(old_name, new_name)

# Rename file and folder in the current working directory
move_file("input.txt", "output.txt")
move_folder("docs", "mydocs")

# Rename file and folder in the filesystem root
move_file("c:/input.txt", "c:/output.txt")
move_folder("c:/docs", "c:/mydocs")
```

This Python code uses the `os` module to rename files and directories, similar to how you would use `ActiveXObject` in JavaScript with COM objects.
