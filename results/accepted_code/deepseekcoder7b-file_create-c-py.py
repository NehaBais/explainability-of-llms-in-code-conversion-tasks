import os

# Creating output.txt in current working directory with 0 bytes size
with open("output.txt", "w") as fp:
    pass

# Changing permissions of the file to rw-r----- (0640)
os.chmod("output.txt", 0o640)

# Creating directory docs in current working directory
if not os.path.exists("docs"):
    os.makedirs("docs")

# Changing permissions of the directory to rwxr-x--- (0750)
os.chmod("docs", 0o750)

# Now doing the same for the filesystem root

# Changing current working directory to root (/)
os.chdir("/")

# Creating output.txt in root with 0 bytes size
open("output.txt", "w").close()

# Changing permissions of the file to rw-r----- (0640)
os.chmod("output.txt", 0o640)

# Creating directory docs in root
if not os.path.exists("docs"):
    os.makedirs("docs")

# Changing permissions of the directory to rwxr-x--- (0750)
os.chmod("docs", 0o750)
