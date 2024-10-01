import os


def create_file(fn):
    with open(fn, "w") as f:
        pass
    print("file", fn, "created!")


def create_dir(dn):
    os.makedirs(dn, exist_ok=True)
    print("directory", dn, "created!")


# call the functions with the desired names
create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")
