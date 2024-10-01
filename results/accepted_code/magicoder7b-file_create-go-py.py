import os


def create_file(fn):
    try:
        f = open(fn, "w")
        print("File", fn, "created!")
        f.close()
    except IOError as e:
        print(e)


def create_dir(dn):
    try:
        os.makedirs(dn, 0o755)
        print("Directory", dn, "created!")
    except OSError as e:
        print(e)


create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")
