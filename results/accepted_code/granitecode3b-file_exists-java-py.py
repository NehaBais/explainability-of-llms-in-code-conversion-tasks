import os

# Check if file exists in current working directory
if os.path.isfile("input.txt"):
    print("File exists")
else:
    print("File doesn't exist")
# Check if directory exists in filesystem root
if os.path.isdir("/docs"):
    print("Directory exists")
else:
    print("Directory doesn't exist")
