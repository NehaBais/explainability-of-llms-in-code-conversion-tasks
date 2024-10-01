'''
```python
import os

def mkdir(path):
    print("Path: ", path)

    if not os.path.exists(path):
        try:
            os.makedirs(path, exist_ok=True)
            return True  # Return true to show successful creation of directory
        except OSError as e:
            print("Failed to create directory:", str(e))
            return False  # Return false if there was an error creating the directory
    else:
        return "Directory already exists"
```