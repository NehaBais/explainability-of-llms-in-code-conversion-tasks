import os


def mkdir_p(path: str, mode: int = 0o770):
    """
    Creates a directory and any missing parents.

    Args:
        path: The path to the directory to create.
        mode: The mode of the directory to create. Defaults to 0o770.
    """

    try:
        os.makedirs(path, mode=mode, exist_ok=True)
    except FileExistsError:
        pass


mkdir_p("/tmp/some/path/to/dir", 0o770)
