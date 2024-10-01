import os


def mkdir_p(path):
    """
    Creates a directory and any missing parents.
    """
    try:
        os.makedirs(path, exist_ok=True)
        print(f"Path '{path}' successfully created.")
    except Exception as e:
        print(f"Error creating directory '{path}': {e}")


mkdir_p("./path/to/dir")
