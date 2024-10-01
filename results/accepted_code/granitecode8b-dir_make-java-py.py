import os


def mkdir_p(path):
    try:
        os.makedirs(path)
        print("Path successfully created")
    except OSError as e:
        if e.errno != os.errno.EEXIST:
            raise


mkdir_p("./path/to/dir")
