```python
import os

# Check if the file docs/input.txt exists in the current working directory
if os.path.isfile(os.getcwd() + "/docs/input.txt"):
    print("File exists")
else:
    print("File does not exist")

# Check if the file /docs/input.txt exists in the filesystem root
if os.path.isfile("/docs/input.txt"):
    print("File exists")
else:
    print("File does not exist")
```

In Python, you can check if a file exists by using `os.path.isfile()` function. This function takes a path as an argument and returns true if the file exists at that location or false otherwise. The `os.getcwd()` function returns the current working directory where the script is being executed. If the file does not exist, it will print "File does not exist" message; otherwise, it will print "File exists" message.
