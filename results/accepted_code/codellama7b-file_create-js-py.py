import os


def create_files():
    try:
        with open("output.txt", "w") as file_object:
            file_object.write("")

        with open("/output.txt", "w") as file_object:
            file_object.write("")

        os.mkdir("docs")
        os.mkdir("/docs")
    except IOError:
        print("An error occurred while creating files and directories")


create_files()
