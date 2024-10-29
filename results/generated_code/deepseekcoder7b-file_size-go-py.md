The Python version of the provided Go code would be as follows -

```python
import os

def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except Exception as e:
        print(e)

def main():
    print_file_size("input.txt")
    print_file_size("/input.txt")
    
if __name__ == "__main__":
    main()
```

Please note that in Python, `os.stat` returns an os.stat_result object which contains the file’s metadata information. If you want to get the size of a file, you can use the .st_size attribute from this returned object. The erroneous scenarios are handled by the try-except block.

Also, unlike in Go language where we need an error variable as well, Python's os module exceptions are raised when something is wrong with the file or path operation. This means that you can expect errors and handle them gracefully.

