import os


def create_dir(path):
    if not os.path.exists(os.path.dirname(path)):
        try:
            os.makedirs(path)
        except (
            Exception
        ) as exc:  # Catch any exceptions that may occur during the creation of directory
            print("Couldn't create directory: {}".format(path))
    return
