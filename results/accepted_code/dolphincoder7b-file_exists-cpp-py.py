import os.path


def file_exists(path):
    print(path)
    if os.path.isfile(path):
        size = os.path.getsize(path)
        print(" exists with a file size of ", size, " bytes.")
    elif os.path.isdir(path):
        print(" is a directory")
    else:
        print(" does not exist")


file_exists("input.txt")
# file_exists('zero_length.txt') # This line will fail as we don't have the zero_length.txt file.
file_exists("docs/input.txt")
# file_exists('docs/zero_length.txt') # Similarly, this line will also fail since we don't have that file.
