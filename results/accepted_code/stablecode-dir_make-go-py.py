import os


def create_directory(path):
    try:
        # Create all directories and their parents if they don't exist
        os.makedirs(path, exist_ok=True)
        print("Directory created successfully!")
    except OSError as e:
        if e.errno == errno.EEXIST:
            print("Directory already exists!")
        else:
            raise
