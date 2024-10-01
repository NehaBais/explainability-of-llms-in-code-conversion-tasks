Here's the Python code that does the same thing as the Java code you provided:
```python
import os
# Check if file exists in current working directory
if os.path.isfile("input.txt"):
 print("File exists")
else:
 print("File doesn't exist")
# Check if directory exists in filesystem root
if os.path.isdir("/docs"):
 print("Directory exists")
else:
 print("Directory doesn't exist")
```
Note that the `os` module is used to perform file and directory operations in Python, and the `os.path` functions are used to check if a file or directory exists. The `os.path.isfile()` function checks if a path refers to an existing regular file, and the `os.path.isdir()` function checks if a path refers to an existing directory.

