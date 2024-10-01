```
import os

def mkdir_p(path: str, mode: int = 0o770):
    """
    Create a directory and any missing parents.

    This function is named after the posix mkdir -p command, and several libraries which implement the same behavior.

    Args:
        path (str): The path to create.
        mode (int, optional): The file mode of the created directory. Defaults to 0o770.
    """
    try:
        os.makedirs(path, mode)
    except OSError as e:
        if e.errno != errno.EEXIST:
            raise
```
This function takes a single path string argument and an optional mode integer argument. It uses the `os` module's `makedirs()` function to create the directory specified in the `path` argument, and sets the file mode of the created directory using the `mode` argument if it is provided. If the directory already exists, the function returns successfully without creating any new directories.
