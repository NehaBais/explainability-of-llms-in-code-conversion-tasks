"""
# Your code here
```python
import os  # Python function to see if the file exists or not
cwd = os.getcwd() + '/'
print("The current working directory is:", cwd)
if (os.path.isfile(f"{cwd}input.txt")):
    print('File input.txt exists in this folder')
else:
    print('File does not exist.')
if os.path.exists(f'{cwd}docs'):
    print("The directory 'docs' is a subdirectory of the current working directory.")
elif (os.path.isdir(f"{cwd}docs")):
    print("There exists, but there are no files in that folder")
else:
    print('Not found')
if os.path.exists('input.txt'):
    print('File input.txt exists in this directory.')
else:
    print('Not Found')
```
