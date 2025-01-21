import os


def create_file(fn):
    with open(fn, "w") as f:
        pass  # Create an empty file of size 0 bytes
    print("file", fn, "created!")


def create_dir(dn):
    if not os.path.exists(dn):
        os.makedirs(dn)
    print("directory", dn, "created!")


if __name__ == "__main__":
    create_file("input.txt")
    create_file("/input.txt")  # This will fail on Windows due to permission issues
    create_dir("docs")
    create_dir("/docs")  # This might not work as intended depending on the filesystem
