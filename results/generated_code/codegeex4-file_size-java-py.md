In Python, you can use the `os` module to obtain information about files and directories. Here is how to convert your Java code to Python:

```python
import os

def main():
    # Define the paths for both files
    file_a = "input.txt"
    file_b = "/input.txt"
    
    # Get the size of each file in bytes
    try:
        size_a = os.path.getsize(file_a)
        print(f"{size_a} B")
    except FileNotFoundError:
        print("File not found:", file_a)

    try:
        size_b = os.path.getsize(file_b)
        print(f"{size_b} B")
    except FileNotFoundError:
        print("File not found:", file_b)

if __name__ == "__main__":
    main()
```

In this Python code, we use the `os.path.getsize()` function to get the size of each file in bytes. If the files are not found, a `FileNotFoundError` is raised and caught by the except clause, printing an error message.
