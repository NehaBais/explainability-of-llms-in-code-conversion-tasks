import os

# check if docs/input.txt exists in current working directory
print(os.path.isfile("docs/input.txt"))  # returns True or False

# check if docs/input.txt exists in filesystem root
print(os.path.isfile("/docs/input.txt"))  # returns True or False

# check if 'docs' directory exists in current working directory
print(os.path.isdir("docs"))  # returns True or False

# check if 'docs' directory exists in filesystem root
print(os.path.isdir("/docs"))  # returns True or False
