import os


def create_file(fn):
    with open(fn, "w") as f:
        pass
    print("file", fn, "created!")


def create_dir(dn):
    try:
        os.mkdir(dn)
    except FileExistsError:
        pass
    print("directory", dn, "created!")


if __name__ == "__main__":
    create_file("output.txt")
    create_dir("docs")

    create_file("/output.txt")
    create_dir("/docs")
