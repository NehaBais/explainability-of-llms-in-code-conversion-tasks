import os


def create_file(fn):
    try:
        with open(fn, "w") as fp:
            pass  # file is created but since it's empty we do nothing here.
        print("File", fn, "created!")
    except IOError as e:
        print(e)


def create_dir(dn):
    try:
        os.mkdir(dn)
        print("Directory", dn, "created!")
    except OSError as e:
        print(e)


if __name__ == "__main__":
    create_file("output.txt")  # in the current working directory
    create_file(
        "/output.txt"
    )  # at filesystem root (might require sudo depending on permissions)
    create_dir("docs")
    create_dir(
        "/docs"
    )  # at filesystem root (might require sudo depending on permissions)
