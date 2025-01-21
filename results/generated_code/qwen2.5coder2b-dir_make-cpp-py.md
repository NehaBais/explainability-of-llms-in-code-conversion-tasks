The equivalent code in Python is as follows:

```python
import os

def mkdir(path):
    try:
        os.makedirs(path, exist_ok=True)
        return True
    except OSError as e:
        print(f"Error creating directory: {e}")
        return False

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: mkdir <path>")
        sys.exit(-1)

    if mkdir(sys.argv[1]):
        print("Directory created successfully.")
    else:
        sys.exit(-1)
```

In this Python script, we use the `os.makedirs()` function to create a directory. The `exist_ok=True` parameter allows the function to simply return if the directory already exists without raising an error. If an error occurs during this process (like if the path does not exist and it's not being created), we catch the exception and print an error message before returning from the function.

The script then checks the number of arguments provided, prints usage instructions if it's not, and proceeds to call `mkdir()` with the first argument passed to the script as the path. If the directory is successfully created, it prints "Directory created successfully." otherwise, it prints the error message.
