import os
from subprocess import call


def create_empty_file():
    file = open("output.txt", "w")
    print("File created!")
    file.close()


create_empty_file()
