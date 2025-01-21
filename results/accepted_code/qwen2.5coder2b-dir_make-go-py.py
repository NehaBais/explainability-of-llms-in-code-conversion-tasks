import os


def create_directory(path):
    try:
        os.makedirs(path, mode=0o770)
        print(f"Directory '{path}' created successfully")
    except FileExistsError:
        print(f"Directory '{path}' already exists")


# Example usage:
create_directory("./path/to/dir")
