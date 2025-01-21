```python
import os

# Create an empty file called 'output.txt' of size 0 bytes in the current working directory
open('output.txt', 'w').close()

# Create an empty file called 'output.txt' of size 0 bytes in the filesystem root
with open('/output.txt', 'w') as f:
    pass

# Create an empty directory named 'docs'
os.makedirs('docs')

# Create an empty directory named 'docs' in the filesystem root
os.makedirs('/docs')
```
