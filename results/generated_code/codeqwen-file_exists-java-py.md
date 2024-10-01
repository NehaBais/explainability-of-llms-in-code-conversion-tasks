The equivalent code in Python would be:

```python
import os

# Check for file and directory existence in the current working directory
if os.path.isfile("docs/input.txt") and os.path.isdir("docs"):
    print("Both file and directory exist in the current working directory.")
else:
    print("One or both of the files or directories do not exist in the current working directory.")

# Check for file and directory existence in the root directory
if os.path.isfile("/docs/input.txt") and os.path.isdir("/docs"):
    print("Both file and directory exist in the root directory.")
else:
    print("One or both of the files or directories Do not exist in the root directory.")
```
