## Solution 1:

```python
import os, shutil

# Rename file input.txt to output.txt in current working directory
if os.path.exists('input.txt'):
    os.rename('input.txt', 'output.txt')

# Rename file c:/input.txt to c:/output.txt in root directory of the filesystem
if os.path.exists('c:/input.txt'):
    shutil.move('c:/input.txt', 'c:/output.txt')

# Move folder docs into mydocs in current working directory
shutil.move('docs', 'mydocs')

# Move folder c:/docs into c:/mydocs in root directory of the filesystem
if os.path.exists('c:/docs'):
    shutil.move('c:/docs', 'c:/mydocs')
```

## Solution 2:


import os,shutil
# Rename file input.txt to output.txt in current working directory
os.rename('input.txt','output.txt')
#Renaem file c:\input.txt into c:\output.txt
os.renames('c:/input.txt', 'c:/output.txt')
# Move folder docs into mydocs in current working directory
shutil.move('docs', 'mydocs')
# Move folder c:/docs into c:/mydocs in root directory of the filesystem
shutil.move('c:/docs', 'c:/mydocs')
