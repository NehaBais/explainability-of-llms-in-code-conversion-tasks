Here is the equivalent Python code for your Rust program:

```python
import os

def main():
    file_name = input("Enter a file name: ")
    
    if not os.path.exists(file_name):
        print(f"Error: {file_name} does not exist")
        return

    try:
        size = os.path.getsize(file_name)
        print(f"Size of {file_name} is {size} bytes")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
```

This Python code does the following:

1. Prompts the user to enter a file name.
2. Checks if the file exists in the current working directory using `os.path.exists()`.
3. If the file exists, retrieves its size in bytes using `os.path.getsize()` and prints it.
4. If any error occurs during these operations, it catches the exception and prints an error message.

Please note that Python's built-in functions like `input()` and `print()` are used to handle user input and output respectively. The `os` module provides a portable way of using operating system dependent functionality.
