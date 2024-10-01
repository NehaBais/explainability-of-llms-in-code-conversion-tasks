You can use Python's built-in `os` module to obtain the size of a file. Here is how you can convert your JavaScript code:

```python
import os

# Get the size of input.txt in the current working directory
file_size_cwd = os.stat('input.txt').st_size

# Get the size of input.txt in the root directory
file_size_root = os.stat('/input.txt').st_size

print(f"File Size (Current Working Directory): {file_size_cwd} bytes")
print(f"File Size (Root Directory): {file_size_root} bytes")
```
Please note that the above code assumes that the file `input.txt` exists in both the current working directory and the root directory. If the file does not exist, Python will raise a `FileNotFoundError`.

Also, keep in mind that the `os.stat()` method returns information about the given path's status. The `.st_size` attribute of this object gives you the size of the file in bytes.
