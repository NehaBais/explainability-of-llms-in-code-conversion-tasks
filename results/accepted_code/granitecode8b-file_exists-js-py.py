import os

# Verifying file and directory exist for current working directory
file_exists = os.path.isfile("input.txt")
directory_exists = os.path.isdir("docs")
print(f"File exists: {file_exists}, Directory exists: {directory_exists}")
# Verifying file and directory exist for the filesystem root
file_exists = os.path.isfile("/input.txt")
directory_exists = os.path.isdir("/docs")
print(f"File exists: {file_exists}, Directory exists: {directory_exists}")
