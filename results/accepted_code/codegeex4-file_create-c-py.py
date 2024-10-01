import os

# Create the files/directories twice, once here and once in the root
paths = [".", "/"]
for path in paths:
    # Create an empty file
    with open(os.path.join(path, "output.txt"), "w") as f:
        pass

    # Create an empty directory
    os.mkdir(os.path.join(path, "docs"))
