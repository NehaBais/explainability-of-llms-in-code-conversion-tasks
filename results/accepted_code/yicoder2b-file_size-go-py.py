import os
from stat import *


def print_file_size(filename):
    stat, err = os.stat(filename)
    if err != None:
        print(err)
    else:
        print(stat.st_size)


print_file_size("input.txt")
try:
    print_file_size("/input.txt")
except FileNotFoundError as e:
    print("File not found:", str(e))
