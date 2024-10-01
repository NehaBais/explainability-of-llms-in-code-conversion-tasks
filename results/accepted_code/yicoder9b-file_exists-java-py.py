import os

# Check for file and directory in current working directory
print(os.path.isfile("docs/input.txt"))
print(os.path.isdir("docs"))

# Check for file and directory at the root of the filesystem (works differently on Windows and Unix-like systems)
if os.name == "posix":  # Unix or Linux
    print(os.path.isfile("/docs/input.txt"))
    print(os.path.isdir("/docs"))
elif os.name == "nt":  # Windows
    print(os.path.isfile("C:\\docs\\input.txt"))
    print(os.path.isdir("C:\\docs"))
