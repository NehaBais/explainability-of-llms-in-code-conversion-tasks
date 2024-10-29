In Python, you can use the `os` module's `makedirs()` function to achieve the same result as in your Java code. Here is an equivalent implementation of your Java program in Python:

```python
import os

def make_dir(path):
    try: 
        os.makedirs(path, exist_ok=True)   # 'exist_ok' argument ensures that it will not raise error if the directory already exists.
        print("Path successfully created.")
    except Exception as e:
        print(e)

# Calling function with a path
make_dir('C:/parent/test') 
```
The `os.makedirs()` method in Python is used to create a directory recursively. It creates missing parent directories along the way too, just like the mkdir -p command does on Unix or Windows system. The 'exist_ok' parameter will suppress the error if the target directory already exists.

Please note that this code might need some adjustment based on your exact project setup as it assumes a lot of things about file and folder access permissions, structure etc.

