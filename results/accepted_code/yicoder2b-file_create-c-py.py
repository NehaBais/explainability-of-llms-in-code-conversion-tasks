import os

# Writing to an empty file
with open("output.txt", "w") as f:
    pass

os.stat("output.txt")  # Check the size of the file
