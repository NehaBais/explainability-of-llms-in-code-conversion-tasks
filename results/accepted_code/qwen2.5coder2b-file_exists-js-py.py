import os

# Check if 'input.txt' exists in the current working directory
if os.path.isfile("input.txt"):
    print("File input.txt exists.")

# Check if 'input.txt' exists in the filesystem root
if os.path.isfile(os.sep + "input.txt"):
    print("File input.txt exists at root level.")

# Check if 'docs' exists in the current working directory
if os.path.isdir("docs"):
    print("Directory docs exists.")

# Check if 'docs' exists in the filesystem root
if os.path.isdir(os.sep + "docs"):
    print("Directory docs exists at root level.")
