import os
from pathlib import Path


def mkdir_p(path):
    try:
        # Using exist_ok=True to ignore the FileExistsError exception if the directory already exists.
        Path(path).mkdir(parents=True, exist_ok=True)
        return 0
    except Exception as e:
        print(f"Couldn't create directory: {path}")
        print(str(e))
        return -1


# Example usage:
if __name__ == "__main__":
    path_to_create = "./path/to/dir"
    result = mkdir_p(path_to_create)
    print(
        "Successfully created directory."
        if result == 0
        else "Failed to create directory."
    )
