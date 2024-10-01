The equivalent code in Python would be:

```python
import os

def create_directory(dir_path):
    try:
        os.makedirs(dir_path, exist_ok=True)
    except OSError as error:
        print('Error occurred while creating directory:', error)
        return False
    else:
        print('Directory created successfully')
        return True
```
This function `create_directory` accepts a path string and tries to create all the parent directories of this path. If any directory doesn't exist yet, it will be created. The function also handles exceptions that might occur during the creation process (like not enough permission).
