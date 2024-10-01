import os


def create_output_and_docs():
    # Creating output.txt file of size 0 bytes in current directory
    with open("output.txt", "w"):
        pass

    # Creating docs/ directory in filesystem root
    os.makedirs("/docs")


create_output_and_docs()
