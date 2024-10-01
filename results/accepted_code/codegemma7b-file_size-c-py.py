import os
from os import stat

foo = stat("input.txt")
print(foo.st_size)

foo = stat("/input.txt")
print(foo.st_size)
