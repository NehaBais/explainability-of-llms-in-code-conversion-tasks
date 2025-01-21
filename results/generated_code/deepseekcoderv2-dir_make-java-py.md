 To convert the given Java code to Python, we can use the `os` module which provides a function called `makedirs` that creates directories recursively if they do not already exist. Here is how you can implement this in Python:

```python
import os

def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")
        else:
            print("Path already exists")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
create_directory("C:/parent/test")
```

This Python code defines a function `create_directory` that takes a single argument, the path to the directory you want to create. It checks if the path exists using `os.path.exists`. If it does not exist, it creates the directory and its missing parent directories with `os.makedirs`. If the directory already exists, it prints a message indicating so. If an exception occurs (e.g., due to permissions or other issues), it catches the exception and prints an error message.
