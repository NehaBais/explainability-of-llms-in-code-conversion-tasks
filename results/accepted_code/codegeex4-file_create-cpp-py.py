import os

# Create an empty file "output.txt" in the current working directory
with open("output.txt", "w") as f:
    pass

# Create an empty file "output.txt" in the root filesystem directory
with open("/output.txt", "w") as f:
    pass

# Create an empty directory "docs" in the current working directory
os.mkdir("docs")

# Create an empty directory "docs" in the root filesystem directory
os.mkdir("/docs")
