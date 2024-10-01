import os


def mkdir_p(path):
    try:
        os.makedirs(path)
    except FileExistsError:
        pass
    else:
        print("Directory created successfully")


# Example usage
mkdir_p("/tmp/some/path/to/dir")
