import os


def mkdirp(path):
    path = path.resolve()

    while not os.path.exists(path):
        parent_path = os.path.dirname(path)
        if not os.path.exists(parent_path):
            mkdirp(parent_path)

        os.makedirs(path)
