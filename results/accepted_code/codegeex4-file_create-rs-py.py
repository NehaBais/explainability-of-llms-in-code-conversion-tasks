import os

FILE_NAME = "output.txt"
DIR_NAME = "docs"


def main():
    create("./")
    create("/")


def create(root):
    path = os.path.join(root, FILE_NAME)
    with open(path, "w"):
        pass  # creates an empty file

    path = os.path.join(root, DIR_NAME)
    try:
        os.makedirs(path)
    except OSError as e:
        print("Error: %s" % e)


if __name__ == "__main__":
    main()
