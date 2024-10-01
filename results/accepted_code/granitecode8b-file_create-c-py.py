import os

# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory
fd = open("output.txt", "w")  # rights 0640 for rw-r-----
fd.close()
os.mkdir("docs")  # rights 0750 for rwxr-x---
# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the filesystem root
fd = open("/output.txt", "w")  # rights 0640 for rw-r-----
fd.close()
os.mkdir("/docs")  # rights 0750 for rwxr-x---
