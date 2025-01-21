You can use the `os` module in Python to achieve the same task. Here is how you can do it:

```python
import os

# Check for the current working directory
print("Checking for 'input.txt' and 'docs' in the current working directory:")
print(os.path.exists('input.txt'))  # Returns True if file exists, False otherwise
print(os.path.exists('docs'))      # Returns True if directory exists, False otherwise

# Check for a file and a directory in the filesystem root
print("\nChecking for 'input.txt' and 'docs' in the filesystem root:")
print(os.path.exists('/input.txt'))  # Returns True if file exists, False otherwise
print(os.path.exists('/docs'))      # Returns True if directory exists, False otherwise
```

The `os.path.exists` function checks whether a path exists or not. If it returns `True`, then the specified path exists in the filesystem, and if it returns `False`, it doesn't exist.
