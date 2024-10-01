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
