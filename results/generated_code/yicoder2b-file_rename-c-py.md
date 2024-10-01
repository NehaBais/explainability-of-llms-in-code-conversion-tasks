Sure, the equivalent Python code would be:

```python
import os

# Rename file in current directory
os.rename('input.txt', 'output.txt')

# Rename directory in current directory
os.rename('docs', 'mydocs')

# Rename file in root directory
os.rename('/input.txt', '/output.txt')

# Rename directory in root directory
os.rename('/docs', '/mydocs')
```
This script assumes that the Python interpreter is running with sufficient permissions to make these file and directory changes.
