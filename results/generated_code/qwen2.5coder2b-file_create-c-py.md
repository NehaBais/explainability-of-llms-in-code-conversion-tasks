```python
import os

# Create an empty file called 'output.txt' in the current working directory with mode 0640
os.system('touch -c output.txt')

# Create an empty directory called 'docs' in the filesystem root with mode 0750
os.system('mkdir --parents docs')
```
