The equivalent code in Python would be:

```python
import os

def create_directory(directory):
    try:
        os.makedirs(directory)
        print("Directory successfully created")
    except Exception as e:
        print('Error occurred:',e)

create_directory('/parent/test')
```

The Python code uses the built-in `os` library to create directories. The `makedirs()` function is equivalent to the POSIX version of the mkdir -p command. If any error occurs during this process (for example, if the directory already exists), it will be caught and printed out.
