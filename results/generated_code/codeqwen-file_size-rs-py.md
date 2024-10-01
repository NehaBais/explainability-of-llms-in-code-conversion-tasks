The given Rust code is already in Python, as it is using basic file system operations and error handling. Python has a similar library 'os' for working with files and directories. Here's how you can convert this code to Python:

```python
import os

def get_file_size(file_name):
    try:
        file_path = os.path.join(os.getcwd(), file_name)  # Get the current working directory and append the file name
        if not os.path.isfile(file_path):
            raise FileNotFoundError("File does not exist")

        file_size = os.path.getsize(file_path)
        print(f"Size of {file_name} is {file_size} bytes")
    except Exception as e:
        print(f"An error occurred: {str(e)}")

def main():
    try:
        if len(sys.argv) > 1:
            file_name = sys.argv[1]  # Get the file name from command line arguments
        else:
            raise ValueError("No file name supplied")

        get_file_size(file_name)
    except Exception as e:
        print(f"An error occurred: {str(e)}")

if __name__ == "__main__":
    main()
```
In this Python version, we use the `os` module to get the size of a file. The `get_file_size()` function attempts to open and retrieve the size of the given file. If anything goes wrong (e.g., file doesn't exist or is not a file), it raises an exception which is then caught in the `main()` function where we print the error message.
