Here is the Python equivalent of your JavaScript code:

```python
import os

# For file in current working directory
print(os.path.getsize('input.txt'))  # Size in bytes

# For file in root directory (Note that this might differ based on OS)
print(os.path.getsize('/input.txt'))  # Size in bytes
```
Please note, the Python equivalent of ActiveXObject does not exist. The Python os module provides functions to interact with files and directories using methods like `os.path.getsize()`. 

Also, be aware that running this code on a non-Windows system may produce an error if you're trying to access 'c:/input.txt' because the file system structure is not the same across different operating systems. On Linux/Unix systems for example, '/' refers to the root directory of the mounted hard drive and there is no specific drive name like 'C:' or 'D:'.
