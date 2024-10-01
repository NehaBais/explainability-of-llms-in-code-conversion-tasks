import os

# Check if the file docs/input.txt exists in the current working directory
if os.path.isfile(os.getcwd() + "/docs/input.txt"):
    print("File exists")
else:
    print("File does not exist")

# Check if the file /docs/input.txt exists in the filesystem root
if os.path.isfile("/docs/input.txt"):
    print("File exists")
else:
    print("File does not exist")
