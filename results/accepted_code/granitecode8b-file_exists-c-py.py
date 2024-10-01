import os

# Check for regular file in the current working directory
print("input.txt is a regular file? ", end="")
if os.path.isfile("input.txt"):
    print("yes")
else:
    print("no")
# Check for directory in the current working directory
print("docs is a directory? ", end="")
if os.path.isdir("docs"):
    print("yes")
else:
    print("no")
# Check for regular file in the filesystem root
print("/input.txt is a regular file? ", end="")
if os.path.isfile("/input.txt"):
    print("yes")
else:
    print("no")
# Check for directory in the filesystem root
print("/docs is a directory? ", end="")
if os.path.isdir("/docs"):
    print("yes")
else:
    print("no")
