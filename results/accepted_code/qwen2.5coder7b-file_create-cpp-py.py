import os


# Function to create a new empty file of size 0 bytes
def create_empty_file(file_path):
    with open(file_path, "w") as f:
        pass


# Function to create an empty directory
def create_directory(dir_path):
    os.makedirs(dir_path, exist_ok=True)


# Create the files and directories in the current working directory
create_empty_file("output.txt")
create_directory("docs")

# Create the files and directories in the filesystem root (requires elevated permissions)
root_dir = "/"
create_empty_file(root_dir + "output.txt")
create_directory(root_dir + "docs")
