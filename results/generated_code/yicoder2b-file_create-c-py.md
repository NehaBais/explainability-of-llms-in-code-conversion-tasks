Sure, the equivalent code in Python would be:

```python
import os

# Writing to an empty file
with open('output.txt', 'w') as f: pass

os.stat('output.txt')  # Check the size of the file

# Making a directory
os.mkdir('docs') 

os.stat('docs')  # Check if the directory has been created
```

Please note that in Python, `open()` function is used to open files and directories and it has different behavior than C's `open()`. Also, the `creat()` function does not create a file if it doesn't exist yet but opens it with given permissions if it exists already.
