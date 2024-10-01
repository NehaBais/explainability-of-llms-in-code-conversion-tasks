import os

# Create a new empty file called "output.txt" and an empty directory called "docs".
# Once here, i.e. in the current working directory.
os.mknod("output.txt")  # This creates a new file with no content.
os.mkdir("docs")  # This creates a new directory.

# Do the same for the filesystem root (/).
os.chroot("/")  # Changes to the root directory.
os.mknod(
    "/output.txt"
)  # This creates a new file with no content in the root directory.
os.mkdir("/docs")  # This creates a new directory in the root directory.
