import os


def main():
    fileA = (
        "/home/user/input.txt" if os.path.exists("/home/user/input.txt") else "file.txt"
    )
    print("%,d B" % (os.path.getsize(fileA)))

    fileB = (
        "/usr/share/doc/file.txt"
        if os.path.exists("/usr/share/doc/file.txt")
        else "/file.txt"
    )
    print("%,d B" % (os.path.getsize(fileB)))


if __name__ == "__main__":
    main()
