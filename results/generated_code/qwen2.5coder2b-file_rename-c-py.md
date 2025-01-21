Sure, here is the Python equivalent of your C code:

```python
import os

# First operation:Rename in current directory
os.rename('input.txt', 'output.txt')
os.rename('docs', 'mydocs')

# Second operation: Rename in root filesystem
os.rename('/input.txt', '/output.txt')
os.rename('/docs', '/mydocs')
```

Please make sure to have the necessary permissions to modify files and directories in those locations.
