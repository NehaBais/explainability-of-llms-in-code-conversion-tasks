```python
import os

def create_file(root):
    with open(f"{root}/{FILE_NAME}", 'w') as file:
        pass  # This creates a new empty file of size 0 bytes

def create_directory(root):
    try:
        os.makedirs(f"{root}/{DIR_NAME}")
    except FileExistsError:
        pass  # This does nothing if the directory already exists

def main():
    root_path = "."
    try:
        create_file(root_path)
        create_directory(root_path)
        print("Files created successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    main()
```

This Python code converts the given Rust code into a function-based approach, making it more readable and easier to understand. It uses the `os` module to handle file and directory operations, ensuring that both files and directories are created when the program is executed.
