import os

# Get file size of the current input.txt file
size = os.path.getsize("./input.txt")

# Get file size of a file located in the root directory
root_size = os.path.getsize("/root/input.txt")
