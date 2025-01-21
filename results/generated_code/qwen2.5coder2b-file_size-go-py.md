To convert the provided Go code to Python, you can use the `os` module for file operations. Here is how you would write this in Python:

```python
import os

def print_file_size(file_path):
    try:
        # Check if the file exists
        if not os.path.exists(file_path):
            print(f"File {file_path} does not exist.")
        else:
            # Get the size of the file
            file_size = os.path.getsize(file_path)
            print(f"The size of {file_path} is: {file_size} bytes")
    except FileNotFoundError:
        print("Error: File not found.")

def main():
    # Print the size of 'input.txt' in the current directory
    print_file_size('input.txt')
    
    # Print the size of '/input.txt' (which is the file system root)
    print_file_size('/input.txt')

if __name__ == "__main__":
    main()
```

In this Python version, `os.path.exists()` is used to check if a file exists at the specified path. If it does not exist, a message indicating that the file was not found is printed. The `os.path.getsize(file_path)` function then retrieves and prints the size of the file in bytes.
