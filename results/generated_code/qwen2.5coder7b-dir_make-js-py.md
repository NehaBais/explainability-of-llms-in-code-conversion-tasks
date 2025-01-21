The Python version of the given JavaScript code can be implemented using os and os.path modules. Here's how you would do it:

```python
import os

def mkdirp(p):
    p = os.path.abspath(p)
    if not os.path.exists(p):
        try:
            os.makedirs(p)
        except Exception as e:
            print(f"Error creating directory {p}: {e}")
    else:
        print(f"Directory {p} already exists.")
```

In this Python code:

- We import the `os` and `os.path` modules which provide a way of using operating system dependent functionality.
- The function `mkdirp(p)` takes a path string as an argument.
- `os.path.abspath(p)` is used to get the absolute path of the given path string.
- If the directory does not exist (`if not os.path.exists(p)`) then `os.makedirs(p)` is called which tries to create directories according to the given path. It automatically creates parent directories that don't exist.
- We handle exceptions in case creating a directory fails and print an error message.
- If the directory already exists, we simply print a success message.

This code should be able to replace your existing JavaScript code as expected.
