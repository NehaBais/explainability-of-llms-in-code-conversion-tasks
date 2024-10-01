Here's the converted Python code:
```python
import os
with open("output.txt", "w") as f:
    pass
os.makedirs(DIR_NAME, exist_ok=True)
```
This code creates an empty file named "output.txt" in the current working directory and an empty directory named "docs" in the filesystem root using the `open()` function to create a new file and the `mkdir()` function to create a new directory. The `exist_ok=True` argument ensures that if the directory already exists, it will not throw an error.

