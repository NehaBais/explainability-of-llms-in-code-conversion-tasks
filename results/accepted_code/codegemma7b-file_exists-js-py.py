import os

# Current working directory
if os.path.isfile("input.txt") and os.path.exists("docs"):
    print("Files and directory exist in current working directory.")

# Filesystem root
if os.path.isfile("c:/input.txt") and os.path.exists("c:/docs"):
    print("Files and directory exist in filesystem root.")
