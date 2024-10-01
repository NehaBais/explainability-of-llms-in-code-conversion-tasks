The equivalent code in Python would be as follows:

```python
import os

def create_directory(path):
    if not os.path.exists(path):
        try:
            os.makedirs(path)
            print("Directory created successfully.")
            return 0
        except OSError:
            print("Failed to create directory: " + path)
            return -1

    else:
        print("Directory already exists.")
        return 0

if __name__ == '__main__':
    import sys
    sys.exit(create_directory(sys.argv[1]))
```

In this python code, we use the `os.path.exists()` function to check if a directory exists and then use the `os.makedirs()` function to create all directories in the given path (which are not existing), creating any necessary parent directories. If something goes wrong while trying to create the directories, an exception will be raised which we catch and print an error message.
