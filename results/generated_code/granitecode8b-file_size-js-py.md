Here's the converted code from JavaScript to Python:
```
import os
file_path = 'input.txt'
file_size = os.stat(file_path).st_size
print(f"The size of {file_path} is {file_size} bytes")
file_path = '/c:/input.txt'
file_size = os.stat(file_path).st_size
print(f"The size of {file_path} is {file_size} bytes")
```
In this Python code, we first import the `os` module to access operating system functionality. We then define the file paths for both files and use the `os.stat()` function to retrieve their sizes in bytes. Finally, we print out the sizes of both files. Note that in Windows, file paths should be written with backslashes instead of forward slashes.

