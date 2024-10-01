import os

# Create an empty file called "output.txt" of size 0 bytes
with open("output.txt", "w") as f:
    pass

# Create an empty directory called "docs"
os.mkdir("docs")

# The filesystem root is represented by "/" in Unix-like systems like Linux and MacOS, so the code to create a directory at the root of the file system can be written as follows:
os.mkdir("/docs")
