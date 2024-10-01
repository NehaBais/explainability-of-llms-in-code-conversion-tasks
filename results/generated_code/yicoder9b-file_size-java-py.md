In Python:

```python
import os

def getFileSize(fileName):
  fileStats = os.stat(fileName)
  return fileStats.st_size 

# for the file in current working directory
print('%s B' %getFileSize('input.txt'))

# for the file in root directory, provide the exact path
print('%s B' %getFileSize('/path/to/root/directory/input.txt'))
```
