Here's the Python code that accomplishes the same task as the given JavaScript code:
```python
import os
# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs".
with open('output.txt', 'w') as f:
 f.write('')
os.makedirs('docs', exist_ok=True)
 
# Create the same files in the root directory
with open('/output.txt', 'w') as f:
 f.write('')
os.makedirs('/docs', exist_ok=True)
```
Note that we use the `open()` function with the `'w'` mode to create a new empty file, and the `makedirs()` function from the `os` module to create an empty directory. The `exist_ok=True` parameter is used to avoid errors if the directory already exists.

