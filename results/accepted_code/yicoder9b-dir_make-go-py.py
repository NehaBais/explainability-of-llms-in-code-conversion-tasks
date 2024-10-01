import os


def mkdir_p(path):
    if not path:  # If no path provided then return from function.
        return
    try:
        os.makedirs(
            path, 0o770
        )  # Try to create the directory with the given permission.
    except (
        OSError
    ) as exc:  # Reraise exception if directories are not writeable or any other error occurs.
        if exc.errno == errno.EEXIST and os.path.isdir(path):
            pass
        else:
            raise
