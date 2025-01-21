import os


def mkdir_p(path):
    """Create a directory at the given path, including any missing parents."""
    try:
        os.makedirs(path)
    except FileExistsError:
        # If the directory already exists, do nothing
        pass
    else:
        print(f"Directory {path} created.")


if __name__ == "__main__":
    if len(os.sys.argv) != 2:
        print("usage: python mkdir_p.py <path>")
        os.sys.exit(1)

    path_to_create = os.sys.argv[1]
    mkdir_p(path_to_create)
