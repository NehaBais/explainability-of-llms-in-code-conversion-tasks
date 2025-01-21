Here is the Python equivalent of your Golang code:

```python
import os

def print_file_size(f):
    if stat := os.stat(f):
        print(stat.st_size)
    else:
        print('Error:', os.strerror(os.errno))

print_file_size("input.txt")
print_file_size("/input.txt")
```

This Python script does the same thing as your Go code: it tries to get the size of a file called 'input.txt' in the current working directory and then again for '/input.txt'. If an error occurs while trying to get the file size (for example, because the file doesn't exist), it prints out an error message.
