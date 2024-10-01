import os


def create_file(fn):
    try:
        with open(fn, "w"):
            pass  # Do nothing, just create the file.
        print(f"File {fn} created!")
    except Exception as e:
        print(e)


def create_dir(dn):
    try:
        os.mkdir(dn)
        print(f"Directory {dn} created!")
    except Exception as e:
        print(e)


create_file("input.txt")
create_file(
    "/input.txt"
)  # '/' character is not needed in Python to denote root directory
create_dir("docs")
create_dir("/docs")  # '/' character is not needed in Python to denote root directory
