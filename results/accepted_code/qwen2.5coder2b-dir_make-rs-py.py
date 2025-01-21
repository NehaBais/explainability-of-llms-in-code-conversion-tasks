import os


def create_dir(path):
    try:
        os.makedirs(path)
        print(f"Directory {path} created successfully")
    except OSError as e:
        if e.errno == 17:  # FileExistsError in Python
            print(f"File exists: {path}")
        else:
            raise


# Test the function
create_dir("./path/to/dir")
