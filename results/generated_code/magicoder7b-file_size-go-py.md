 In Python, you can use the `os` and `stat` standard libraries to achieve this:

```python
import os
import stat

def get_file_size(f):
    try:
        return os.stat(f).st_size
    except FileNotFoundError:
        print("File not found")

print(get_file_size('input.txt'))
print(get_file_size('/input.txt'))
```
This code does the same thing as your Golang example - it verifies the size of a file called `input.txt` in the current working directory and another one `/input.txt` in the root. If an error occurs (like if the file doesn't exist), it prints a message to let you know about the issue.
