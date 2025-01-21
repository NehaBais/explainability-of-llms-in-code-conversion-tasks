Error: Unmatched ')'. 

Fix: Remove the extra closing parenthesis ')' at the end of the print statement.

Corrected code:

```py
import os

def create_directory(dir_name):
    try:
        os.mkdir(dir_name)
    except FileExistsError as e:
        pass  # If directory already exists, just return successfully
    except OSError as e:
        print("Creation of the directory %s failed due to: %s" % (dir_name, e))))
```
