To convert this Java code to Python, you can use the `os` module and the `pathlib` library. Here's the converted code:
```python
import os
from pathlib import Path

fileA = Path("input.txt")
print(f"{fileA.stat().st_size} B")
fileB = Path("/file.txt")
print(f"{fileB.stat().st_size} B")
```
In this code, we use the `Path` class from the `pathlib` library to create objects representing the files we want to check. We then use the `stat()` method of these objects to get information about their sizes, and print them out using string formatting.

Note that in Python, the forward slash `/` is used as a path separator, whereas in Java it's used as an escape character to indicate that a path should be treated as absolute, regardless of the current working directory. In this case, we use the `Path` class to create a relative path for the second file, which refers to a file located at the root of the file system.
