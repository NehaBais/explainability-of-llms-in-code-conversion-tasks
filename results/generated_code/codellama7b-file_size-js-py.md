You can convert the JavaScript code to Python using the following code:

```python
import os

file_size = os.path.getsize('input.txt')
root_file_size = os.path.getsize('/input.txt')
print(f"The file size of input.txt is {file_size} bytes")
print(f"The file size of /input.txt is {root_file_size} bytes")
```