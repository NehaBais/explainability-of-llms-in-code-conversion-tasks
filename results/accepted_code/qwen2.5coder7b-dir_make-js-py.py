import os


def mkdirp(p):
    p = os.path.abspath(p)
    if not os.path.exists(p):
        try:
            os.makedirs(p)
        except Exception as e:
            print(f"Error creating directory {p}: {e}")
    else:
        print(f"Directory {p} already exists.")
