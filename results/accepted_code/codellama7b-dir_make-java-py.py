import os


def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
        else:
            print("Directory already exists")
    except OSError as e:
        print("Error creating directory: {}".format(e))
