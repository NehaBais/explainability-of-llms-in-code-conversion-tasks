import os
import shutil

# Create a new empty file called "output.txt" of size 0 bytes in the current working directory
with open("output.txt", "w"):
    pass

# Create a new empty file called "output.txt" of size 0 bytes in the filesystem root
with open("/output.txt", "w"):
    pass

# Create a new empty directory called "docs" in the current working directory
os.mkdir("docs")

# Create a new empty directory called "docs" in the filesystem root
shutil.mkdir("/docs")
