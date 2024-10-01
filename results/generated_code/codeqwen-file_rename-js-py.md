Python has built-in support for file and directory manipulation operations, such as renaming files and directories, so there is no need to use an ActiveX object like in JavaScript. Here's how you can do the same thing in Python:

```python
import os
import shutil

# rename input.txt to output.txt in the current working directory
shutil.move('input.txt', 'output.txt')

# rename c:/input.txt to c:/output.txt in the root of C drive
shutil.move('c:/input.txt', 'c:/output.txt')

# rename docs to mydocs in the current working directory
os.rename('docs', 'mydocs')

# rename c:/docs to c:/Mydocs in the root of C drive
os.rename('c:/docs', 'c:/Mydocs')
```
This Python script will handle both file and directory renames, as well as copying files and directories if necessary.
