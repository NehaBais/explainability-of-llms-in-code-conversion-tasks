The equivalent Python code would be:

```python
import os 

def get_file_size(filename):
    if filename == 'input.txt':
        return os.path.getsize('./{}'.format(filename))
    elif '/' in filename: # it checks if the file is located in a directory outside of current working directory or file system root
        return os.path.getsize('/'+filename)
    else:  # if not specified, it assumes it is within current working directory or file system root
        return os.path.getsize(filename)

print(get_file_size('input.txt'))  # verify size of input.txt in the current working directory
print(get_file_size('/input.txt')) # verify size of input.txt in filesystem root
```

Please note, that this method returns bytes count, not a readable file size as the 'Size' property does. This is because the method getsize() in Windows doesn’t return a human-readable size. If you need to print out sizes in a more user-friendly way, consider using the os.path.getsize() function with a helper function.
