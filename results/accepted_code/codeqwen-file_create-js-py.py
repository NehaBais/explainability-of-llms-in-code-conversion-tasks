import os


def fct(err):
    if err:
        print(err)


os.system("touch output.txt")
os.system("mkdir docs")

os.system('/bin/bash -c "cd / && touch output.txt"')
os.system('/bin/bash -c "cd / && mkdir docs"')
