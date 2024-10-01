import os


def create_files():
    try:
        with open("output.txt", "w"):
            pass
        os.mkdir("docs")
        with open(os.path.join(os.sep, "output.txt"), "w"):
            pass
        os.mkdir(os.path.join(os.sep, "docs"))
    except IOError as e:
        print("I/O error({0}): {1}".format(e.errno, e.strerror))


create_files()
