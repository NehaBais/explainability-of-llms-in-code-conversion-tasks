In Python, the `os.makedirs()` function does exactly the same thing as Rust's `std::fs::create_dir_all()`. Here is how you can do it:

```python
import os

def create_directory(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != errno.EEXIST:
            raise

# Example usage:
create_directory("./path/to/dir")
```

This function takes a path string and attempts to create all directories leading up to that path. If any of the directories already exist, it does nothing for them (it doesn't raise an error), but it does raise an error if there is some other problem (such as a file with that name already existing).
