import os


def mkdir_p(path):
    """Create a directory and any missing parents."""
    try:
        os.makedirs(path, mode=0o770)
    except FileExistsError:
        # If the directory already exists, do nothing
        pass


# Example usage:
mkdir_p("/tmp/some/path/to/dir")
