Sure! Here's the equivalent code in Python:
```
import os

def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except OSError as err:
        print(err)

if __name__ == "__main__":
    print_file_size("input.txt")
    print_file_size("/input.txt")
```
Note that in Python, we use the `os` module to interact with the file system, and we use the `stat()` function to get information about a file's size. The `print()` statement is used to display the result of the `stat()` function.

Also, in Python, we can use the `__name__ == "__main__"` check to ensure that the code inside the `if` block only runs when the script is executed directly, and not when it's being imported as a module.
