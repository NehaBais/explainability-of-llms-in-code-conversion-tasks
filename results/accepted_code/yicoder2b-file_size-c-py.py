import os


def main():
    with open("input.txt", "rb") as f1:
        file_size1 = len(f1.read())
        print("Size of the file input.txt for current working directory:", file_size1)
        f1.seek(0)
    with open("/input.txt", "rb") as f2:
        file_size2 = len(f2.read())
        print("Size of the file /input.txt in filesystem root:", file_size2)


if __name__ == "__main__":
    main()
