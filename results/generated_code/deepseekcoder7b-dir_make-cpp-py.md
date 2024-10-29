The Python version of the code will use the os and os.path module for handling file paths. Here is your C++ program converted into a Python function named `create_dir`:

```python
import os

def create_dir(path):
    if not os.path.exists(os.path.dirname(path)):
        try:
            os.makedirs(path)
        except Exception as exc:  # Catch any exceptions that may occur during the creation of directory
            print("Couldn't create directory: {}".format(path))
    return
```
This function will attempt to create a directory at the given path including all necessary parent directories. If an error occurs, it will be caught and handled, printing an appropriate message. 

Please note that Python uses raw_input() for taking user input which has been changed to input(). Both are nearly identical in usage except that raw_input does not convert the input data, while input does. Moreover, Python 2's print statement is a function and behaves differently from Python 3's print statement.

