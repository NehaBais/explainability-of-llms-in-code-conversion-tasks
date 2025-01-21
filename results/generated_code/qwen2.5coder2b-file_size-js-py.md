To convert this JavaScript code to Python, you would use the built-in os module. Here's how you can write it:

```python
import os

# Get size of file in current working directory
file_size_current_directory = os.path.getsize('input.txt')
print(f"Size of 'input.txt' in current directory: {file_size_current_directory} bytes")

# Get size of file in the root directory
file_size_root_directory = os.path.getsize('c:/input.txt')
print(f"Size of 'input.txt' in the root directory: {file_size_root_directory} bytes")
```

Please note that this code assumes that both files exist and are accessible. If you want to handle exceptions like file not found or permission issues, you would need to add try-except blocks as follows:

import os

try:
    # Get size of file in current working directory
    file_size_current_directory = os.path.getsize('input.txt')
    print(f"Size of 'input.txt' in current directory: {file_size_current_directory} bytes")

    # Get size of file in the root directory
    file_size_root_directory = os.path.getsize('c:/input.txt')
    print(f"Size of 'input.txt' in the root directory: {file_size_root_directory} bytes")
except FileNotFoundError:
    print("File not found.")
except PermissionError:
    print("Permission denied.")
