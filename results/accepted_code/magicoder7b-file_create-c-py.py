import os

# Create a new empty file called "output.txt" and an empty directory called "docs".
# In the current working directory.
os.mknod("./output.txt")  # Create an empty file at ./output.txt
os.mkdir("./docs")  # Create a new directory at ./docs

# Do this twice, once here and once in the filesystem root.
with open("/root/output.txt", "w"):  # Create an empty file at /root/output.txt
    pass
os.makedirs("/root/docs")  # Create a new directory at /root/docs
