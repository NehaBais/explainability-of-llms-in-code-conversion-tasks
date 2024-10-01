import os


def printFileSize(filePath):
    print(os.path.getsize(filePath))


# replace 'input.txt' with your target file path and name.
# for root directory, use '/pathname/filename' or '\\\\pathname\\filename' on Windows
printFileSize("input.txt")  # size of the file in current working directory
printFileSize("/input.txt")  # size of the file at system root level
