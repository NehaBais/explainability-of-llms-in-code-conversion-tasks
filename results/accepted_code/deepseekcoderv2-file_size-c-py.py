import os, sys

stat_info = os.stat(os.path.join("input.txt"))
print stat_info.st_size

stat_info2 = os.stat('/input.txt')
print stat_info2.st_size