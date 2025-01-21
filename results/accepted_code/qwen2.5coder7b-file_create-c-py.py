import os

# Create an empty file called "output.txt" in the current working directory
with open("output.txt", "w") as f:
    pass  # This line does nothing but creates a new empty file

# Create an empty directory called "docs" in the current working directory
os.mkdir("docs")

# Change the working directory to the filesystem root (requires appropriate permissions)
os.chdir("/")

# Create an empty file called "output.txt" in the filesystem root
with open("/output.txt", "w") as f:
    pass  # This line does nothing but creates a new empty file

# Create an empty directory called "docs" in the filesystem root
os.mkdir("/docs")
