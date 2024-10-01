import os

# check if input.txt exists in the current working directory
if os.path.exists("input.txt"):
    print("File input.txt exists")
else:
    print("File input.txt does not exist")

# check if docs folder exists in the current working directory
if os.path.exists("docs"):
    print("Folder docs exists")
else:
    print("Folder docs does not exist")

# check if input.txt exists in the filesystem root
if os.path.exists("/input.txt"):
    print("File /input.txt exists")
else:
    print("File /input.txt does not exist")

# check if docs folder exists in the filesystem root
if os.path.exists("/docs"):
    print("Folder /docs exists")
else:
    print("Folder /docs does not exist")
