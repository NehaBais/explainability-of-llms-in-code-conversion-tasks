import os


def mkdir_p(path):
    """Create directory and any missing parents"""
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno != errno.EEXIST or not os.path.isdir(path):
            raise


# Example usage
mkdir_p("./path/to/dir")
