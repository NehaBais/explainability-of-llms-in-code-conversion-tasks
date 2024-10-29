import os

# Create new files in the current working directory
with open("output.txt", "w"):
    pass  # creates a new empty file

# Create new directories in the current working directory
if not os.path.exists("docs"):
    os.makedirs("docs")

# Create new files and directories at root
with open("/output.txt", "w"):
    pass  # creates a new empty file

# Create new directories at root
if not os.path.exists("/docs"):
    os.makedirs("/docs")
