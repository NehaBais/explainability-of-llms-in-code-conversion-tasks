import os


def create_file(fn):
    f = open(fn, "w+")
    print(f"file {fn} created!")
    f.close()


def create_dir(dn):
    os.mkdir(dn)
    print(f"directory {dn} created!")


create_file("output.txt")
create_file("/output.txt")
create_dir("docs")
create_dir("/docs")
