import os


def mkdirp(p):
    p = os.path.abspath(p)

    try:
        os.makedirs(p)
    except OSError as e:
        if e.errno != os.errno.EEXIST:
            raise  # If the error was not due to the directory already existing, re-raise it.


# Example usage
mkdirp("./path/to/dir")
