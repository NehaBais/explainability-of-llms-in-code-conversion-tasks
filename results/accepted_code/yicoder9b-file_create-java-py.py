import os


def create_files():
    try:
        open("output.txt", "a").close()  # Creates a new file with 0 bytes
        open(os.sep + "output.txt", "a").close()
        os.mkdir("docs")  # Makes an empty directory
        os.mkdir(os.sep + "docs")
    except Exception as e:
        print(e)


create_files()
