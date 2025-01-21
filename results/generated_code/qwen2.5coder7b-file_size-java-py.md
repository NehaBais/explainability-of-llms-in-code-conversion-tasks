Here is the Python equivalent of your Java code:

```python
import os

file_a = 'input.txt'
print(f"{os.path.getsize(file_a):,} B")

file_b = '/input.txt'
print(f"{os.path.getsize(file_b):,} B")
```
In this Python version, we use the `os` module to get the size of the file. Note that in Python, we need to specify the absolute path for the second file since it's not specified in the current working directory as in your Java code.

Please replace 'input.txt' with the actual name and location of your files if they are different.
