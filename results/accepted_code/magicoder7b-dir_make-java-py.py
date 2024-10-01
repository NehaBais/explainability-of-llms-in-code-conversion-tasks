import os
from pathlib import Path


def create_dir(path):
    try:
        p = Path(path)

        # If it is an existing directory just return successfully.
        if p.is_dir():
            print("Directory already exists")
            return

        # Otherwise, create the directory and any missing parent directories.
        os.makedirs(path)
        print("Path created successfully")

    except Exception as e:
        print("An error occurred while creating the path: ", str(e))


create_dir("./parent/test")
