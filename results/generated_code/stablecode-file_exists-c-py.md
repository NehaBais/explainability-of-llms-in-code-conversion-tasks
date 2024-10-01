Here's how you can convert the given C code to Python:

```python
import os

# Function to check if a file is regular
def is_regular(file):
    return os.path.isfile(file) and not os.access(file, os.W_OK))

# Function to check if a directory exists
def dir_exists(directory):
    return os.path.isdir(directory)

# Main function
def main():
    current_dir = os.getcwd()

    print("input.txt is a regular file? {}".format('yes' if is_regular(os.path.join(current_dir, 'input.txt')) else 'no')))
    print("docs exists as a directory? {}".format('yes' if dir_exists(os.path.join(current_dir, 'docs')) else 'no')))

    root_dir = os.environ['HOME']

    print("input.txt is a regular file? {}".format('yes' if is_regular(os.path.join(root_dir, '/input.txt')) else 'no')))
    print("docs exists as a directory? {}".format('yes' if dir_exists(os.path.join(root_dir, '/docs')) else 'no'))))

# Call main function
if __name__ == "__main__":
    main()
```

This Python code checks whether the `input.txt` file exists and is a regular file. It also checks if the `docs` directory exists. The functions `is_regular()` and `dir_exists()` are used to perform these checks. The main function calls these helper functions and prints out the results accordingly.
