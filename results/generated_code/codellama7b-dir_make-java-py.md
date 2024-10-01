
Here's the equivalent Python code:
```python
import os

def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
        else:
            print("Directory already exists")
    except OSError as e:
        print("Error creating directory: {}".format(e))
```
Explanation:

1. The `os` module is used to interact with the operating system.
2. The `makedirs()` function creates a directory and any missing parents.
3. The `path` parameter is passed to the function, which represents the path of the directory to be created.
4. The function first checks if the directory exists using `os.path.exists()`. If it does not exist, it creates the directory using `os.makedirs()`.
5. If the directory already exists, the function simply prints a message indicating that it is not created.
6. In case of any error, the function catches the exception and prints an error message.
7. The function returns nothing.

Note: The equivalent Python code for `mkdir -p` command would be:

import os
os.makedirs("C:/parent/test", exist_ok=True)

This will create the directory and any missing parents, and if it already exists, it will not throw an error.
