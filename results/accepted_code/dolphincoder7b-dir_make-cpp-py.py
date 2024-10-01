import os
from pathlib import Path


def mkdir(path):
    # Check if the path exists
    if not os.path.exists(path):
        # Create any missing directories
        return Path(path).mkdir(parents=True, exist_ok=True)


# Example usage
path = "./path/to/dir"
mkdir(path)
