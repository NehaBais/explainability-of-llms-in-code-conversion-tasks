import os


def make_dir(path):
    try:
        os.makedirs(
            path, exist_ok=True
        )  # 'exist_ok' argument ensures that it will not raise error if the directory already exists.
        print("Path successfully created.")
    except Exception as e:
        print(e)


# Calling function with a path
make_dir("C:/parent/test")
