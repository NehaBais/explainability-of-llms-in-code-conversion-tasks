The equivalent code in Python is as follows:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path)
        print("Directory successfully created")
    except OSError as error:
        print(error)

if __name__ == '__main__':
    create_directory('C:/parent/test')
```
This Python script uses the `os.makedirs()` function which is similar to Java's `mkdirs()`. If the directory already exists it won't throw an exception, but if it does not exist, it will create the missing directories along the way.
