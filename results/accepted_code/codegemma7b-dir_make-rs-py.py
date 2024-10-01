import os


def mkdir_p(path: str):
    """
    Creates a directory and any missing parents.

    Args:
        path: The path to the directory.
    """

    os.makedirs(path, exist_ok=True)


mkdir_p("./path/to/dir")
