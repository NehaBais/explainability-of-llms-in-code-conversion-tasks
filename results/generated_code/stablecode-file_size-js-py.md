In Python, you can use the `os` and `shutil` modules to interact with the file system. Here's how you would convert that JavaScript code into equivalent Python code:

```python
import os
import shutil

# Get the path of 'input.txt' in current working directory
file_path1 = 'input.txt'
full_path1 = os.path.join(os.getcwd(), file_path1))
size1 = os.path.getsize(full_path1))
print('Size of {} in current working directory: {}'.format(file_path1, size1)))

# Get the path of 'input.txt' in root directory
file_path2 = 'c:/input.txt'
if os.path.exists(file_path2)):
    size2 = os.path.getsize(file_path2)))
    print('Size of {} in root directory: {}'.format(file_path2, size2))))
else:
    print('{} does not exist.'.format(file_path2))
```
This code first tries to get the `input.txt` file's size from the current working directory. Then it attempts to do the same for a file located at `c:/input.txt`. If the latter file exists, then its size is printed out; otherwise, an appropriate message is displayed.
