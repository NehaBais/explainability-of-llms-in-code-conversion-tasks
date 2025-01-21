import os

# Check if 'docs' directory exists in the current working directory
if not os.path.exists("docs"):
    print("Directory 'docs' does not exist")

# Check if 'input.txt' file exists in the current working directory
if not os.path.exists("docs/input.txt"):
    print("File 'input.txt' does not exist")

# Check if 'docs' directory exists in the filesystem root
if not os.path.exists("/docs"):
    print("Directory '/docs' does not exist")

# Check if 'input.txt' file exists in the filesystem root
if not os.path.exists("/docs/input.txt"):
    print("File 'input.txt' does not exist")
