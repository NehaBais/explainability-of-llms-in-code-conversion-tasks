Sure, here is the equivalent code in Python:

```python
import os

# Create an empty file called 'output.txt' and directory 'docs' in the current working directory
with open('output.txt', 'w') as f:
    pass
os.makedirs('docs', exist_ok=True)

# Create an empty file called 'output.txt' and directory 'docs' in the filesystem root
with open('/root/output.txt', 'w') as f:
    pass
os.makedirs('/root/docs', exist_ok=True)
```

Note: You need to run this script with sufficient permissions to create files and directories in the `/root` directory. If you are running this on a local machine, replace `/root` with an appropriate path where you have write permissions.
