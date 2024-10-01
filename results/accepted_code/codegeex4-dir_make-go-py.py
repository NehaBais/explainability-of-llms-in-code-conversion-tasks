import os


def make_dirs(path):
    try:
        # The mode argument is optional and defaults to 0o777.
        # This function will work cross-platform.
        os.makedirs(path, exist_ok=True)
        print(f"Directory '{path}' created successfully.")
    except Exception as e:
        print(f"Failed to create directory '{path}': {e}")


# Example usage
make_dirs("./path/to/dir")
