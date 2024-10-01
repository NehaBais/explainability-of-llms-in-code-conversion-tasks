import os


def check_file(file):
    if os.path.exists(file) and os.path.isfile(file):
        return "yes"
    else:
        return "no"


def check_dir(directory):
    if os.path.exists(directory) and os.path.isdir(directory):
        return "yes"
    else:
        return "no"


print(f'input.txt is a regular file? {check_file("input.txt")}')
print(f'docs is a directory? {check_dir("docs")}')
print(f'/input.txt is a regular file? {check_file("/input.txt")}')
print(f'/docs is a directory? {check_dir("/docs")}')
