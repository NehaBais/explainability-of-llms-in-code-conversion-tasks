import os


def create_file(fn):
    try:
        open(fn, "w").close()
        print(f"file {fn} created!")
    except Exception as e:
        print(e)


def create_dir(dn):
    try:
        os.mkdir(dn)
        print(f"directory {dn} created!")
    except Exception as e:
        print(e)


def main():
    create_file("input.txt")
    create_file("/input.txt")
    create_dir("docs")
    create_dir("/docs")


if __name__ == "__main__":
    main()
