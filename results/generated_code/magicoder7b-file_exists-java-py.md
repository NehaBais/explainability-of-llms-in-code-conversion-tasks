 You can use the `os` module in Python to check whether a specific file or directory exists at a given path. Here's how you might write this code in Python:

```python
import os

# Check if docs and input.txt exist in current working directory 
if os.path.exists("docs/input.txt"):
    print('File docs/input.txt exists')
else:
    print('File docs/input.txt does not exist')
    
# Check if docs and input.txt exist in filesystem root (/)
if os.path.exists("/docs/input.txt"):
    print('File /docs/input.txt exists')
else:
    print('File /docs/input.txt does not exist')
```
