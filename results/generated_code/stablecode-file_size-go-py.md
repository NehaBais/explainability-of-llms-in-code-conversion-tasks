Here is your Go code converted to Python:

```python
import os
import sys

def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except Exception as e:
        print("Error:", str(e)))

if __name__ == "__main__":
    print_file_size(os.path.join(os.getcwd(), 'input.txt'))
    print_file_size("/input.txt") if sys.platform != "win32" else print_file_size("\\\\input.txt")
```

   Here, we are joining the current working directory with 'input.txt'. 
   On Windows systems, file paths must start with a drive letter or a forward slash (if the path is absolute). '/input.txt' is an absolute path which won't work in this scenario as it's trying to locate a file at the system root level.

Note: Python code doesn't support the root directory of the filesystem, hence "/input.txt" will give error on all platforms, including Windows. Only relative paths from the current working directory can be used for files in the current working directory. 

If you want to work with files in the system root directory, you'll need to use Python libraries specifically designed for interacting with the system file-system (e.g., `pathlib` module on Unix/Linux systems or `pywin32` library on Windows).
