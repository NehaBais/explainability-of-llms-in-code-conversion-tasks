import os

try:
    open(
        "output.txt", "w+"
    ).close()  # Create a new empty file called output.txt in current directory
    open(
        "/output.txt", "w+"
    ).close()  # Create a new empty file called output.txt in root filesystem
    os.mkdir("docs")  # Create an empty directory called docs in current directory
    os.mkdir("/")  # Create an empty directory called docs in root filesystem
except Exception as e:
    print(e)
