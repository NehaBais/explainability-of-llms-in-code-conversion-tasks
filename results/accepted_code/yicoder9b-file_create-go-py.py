import os


def createFile(fn):
    open(fn, "a").close()  # creates a new file with size = 0 bytes
    print("file", fn, "created!")


def createDir(dn):
    os.makedirs(dn, exist_ok=True)  # makes directory
    print("directory", dn, "created!")


if __name__ == "__main__":
    createFile("input.txt")
    createFile("/input.txt")
    createDir("docs")
    createDir(
        "/"
    )  # makes root directory, note that this will overwrite the previous "docs" directory
