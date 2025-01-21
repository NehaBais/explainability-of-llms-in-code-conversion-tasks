import os


def create_file(directory, file_name):
    with open(os.path.join(directory, file_name), "w") as file:
        pass  # This will create an empty file


def create_directory(directory):
    os.makedirs(directory)


# Create output.txt in the current working directory
create_file(".", "output.txt")

# Create output.txt in the filesystem root
create_file("/", "output.txt")

# Create docs folder in the current working directory
create_directory("./docs")

# Create docs folder in the filesystem root
create_directory("/docs")
