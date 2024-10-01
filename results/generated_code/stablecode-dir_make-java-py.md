Here is the Python equivalent of your Java code:

```python
import os

def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")

    except Exception as e:
        print(e)
        
# Invoke the function with your desired path   
create_directory("C:/parent/test")
```
The `os` module in Python provides functions for interacting with the operating system. The `makedirs()` method creates a directory and any missing parent directories. If the directory already exists, it does nothing. This is why we only check if the path exists before attempting to create it.
