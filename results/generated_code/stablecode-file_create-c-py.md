Below is the equivalent Python code to perform the same operations:

```python
import os
import stat

# Create file in current directory
with open("output.txt", "w") as f:
    pass

# Setting permissions for 'output.txt' (rw-r-----)
os.chmod("output.txt", stat.S_IRUSR | stat.S_IWUSR | stat.S_IRGRP | stat.S_IWGRP))

# Create directory 'docs' in current directory
try:
    os.mkdir('docs')
except FileExistsError:
    pass

# Setting permissions for 'docs' (rwxr-x---)
os.chmod("docs", stat.S_IRUSR | stat.S_IWUSR | stat.S_IRGRP | stat.S_IWGRP))
```
In Python, there's no need to use "open" with flags like O_CREAT or O_TRUNC. Instead, you can use the built-in `open` function in Python, which conveniently handles file creation and truncation automatically.
Also, Python doesn't require a specific order of operations for creating files and directories. Therefore, we can simply call `os.mkdir('docs')`) to create the 'docs' directory without needing to explicitly check if it already exists (as Python will raise an exception if attempting to create an existing directory).
