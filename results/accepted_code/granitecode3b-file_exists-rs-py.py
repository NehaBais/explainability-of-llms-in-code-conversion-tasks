import os
from pathlib import Path

# Verify that a file called input.txt and a directory called docs exist in the current working directory
try:
    if os.path.isfile("input.txt"):
        print("input.txt is a file")
    else:
        print("input.txt is not a file")

    if os.path.isdir("docs"):
        print("docs is a directory")
    else:
        print("docs is not a directory")
except FileNotFoundError:
    print("input.txt or docs does not exist")
# Verify that a file called input.txt and a directory called docs exist in the filesystem root
try:
    if Path("/input.txt").is_file():
        print("/input.txt is a file")
    else:
        print("/input.txt is not a file")

    if Path("/docs").is_dir():
        print("/docs is a directory")
    else:
        print("/docs is not a directory")
except FileNotFoundError:
    print("/input.txt or /docs does not exist")
