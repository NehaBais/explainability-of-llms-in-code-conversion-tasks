import os

# Current working directory
if os.path.exists("docs/input.txt"):
    print("File exists in current working directory")
else:
    print("File does not exist in current working directory")

# Filesystem root
if os.path.exists("/docs/input.txt"):
    print("File exists in filesystem root")
else:
    print("File does not exist in filesystem root")
