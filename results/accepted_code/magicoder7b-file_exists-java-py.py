import os

# Check if docs and input.txt exist in current working directory
if os.path.exists("docs/input.txt"):
    print("File docs/input.txt exists")
else:
    print("File docs/input.txt does not exist")

# Check if docs and input.txt exist in filesystem root (/)
if os.path.exists("/docs/input.txt"):
    print("File /docs/input.txt exists")
else:
    print("File /docs/input.txt does not exist")
