In Python you can use the `os` and `os.path` modules to achieve similar functionality as in your Go code. Here's a translation of your program into Python:

```python
import os

def print_stat(p): 
    if not (os.path.exists(p)):
        print("Path does not exist")
    elif os.path.isdir(p):
        print(f"{p} is a directory")
    else:
        print(f"{p} is a file")

def main(): 
    print_stat("input.txt")
    print_stat("/input.txt")
    print_stat("docs")
    print_stat("/docs")
    
if __name__ == "__main__":
    main()
```
This Python code does the following:
1) The `print_stat(p)` function uses the `os.path.exists(p)` method to check if a file or directory exists at path p. It then uses `os.path.isdir(p)` to determine if the existing item is a directory, and prints out the appropriate message accordingly.
2) The `main()` function calls `print_stat(p)` for each of your required paths ("input.txt", "/input.txt", "docs", and "/docs").
3) In Python, entry point to any program resides in a special variable called __name__. If this script is being run directly (not imported as a module), `if __name__ == "__main__": main()` allows for the execution of our `main()` function. This behaves like the `main()` function in your Go code, calling it when you execute the file directly.

