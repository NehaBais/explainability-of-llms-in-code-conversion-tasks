import os

# Check current working directory
print(os.path.isfile("input.txt") and os.path.isdir("docs"))

# Check filesystem root (Note that os.getcwd() gets the current working directory)
root_directory = "/"
print(
    os.path.isfile(f"{root_directory}input.txt")
    and os.path.isdir(f"{root_directory}docs")
)
