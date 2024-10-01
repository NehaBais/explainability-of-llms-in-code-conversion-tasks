import os


def mkdir_p(path):
    try:
        os.makedirs(path)
    except FileExistsError:
        pass


# Example usage
mkdir_p("./path/to/dir")
