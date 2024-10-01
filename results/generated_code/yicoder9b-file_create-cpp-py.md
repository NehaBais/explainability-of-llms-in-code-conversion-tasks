In Python you can use the `os` and `pathlib` libraries to perform these operations:

Here is how you could translate this code from C++ into Python.

```python
import os
from pathlib import Path

# Create empty file in current working directory 
open('output.txt', 'w').close()
Path('/output.txt').touch() # File at root level
  
# Create an empty directory in the current working directory and the filesystem root
os.mkdir('docs')
Path('/docs').mkdir(exist_ok=True) 
```

Please note that you may need to have permissions to create files and directories at the root of your file system. If you don't have these permissions, you will need to run your Python script as an administrator or change the paths above to a directory where you have write access.
Also in python, we use 'w' mode with open() function to write contents into a file. 'touch' method is used to create empty files and 'mkdir' for creating directories. 'exist_ok=True' allows dir creation if already exists it will not throw error.
