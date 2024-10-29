import os
import shutil


def fct(file_path):
    if not os.path.exists(file_path):
        print("File/Directory does not exist: ", file_path)
    else:
        print("File/Directory exists: ", file_path)


# create new empty files and directories in current working directory
files = ["output.txt", "docs"]
for f in files:
    if os.path.isdir(f):  # if it's a directory, use the mkdir() method
        try:
            os.mkdir(f)
        except OSError as error:
            print("Error creating directory", f, ": ", error)

        size = shutil.get_disk_usage(".")  # get current dir size
        print("Size of the directory is : ", size.used)
    else:  # if it's a file, use the open() method to create new files
        try:
            with open(f, "w"):
                pass
        except OSError as error:
            print("Error creating file", f, ": ", error)

        size = os.path.getsize(f)  # get file size in bytes
        print("Size of the file is : ", size)
