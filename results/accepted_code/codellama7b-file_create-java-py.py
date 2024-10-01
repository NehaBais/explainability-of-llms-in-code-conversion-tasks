import os


def create_file(path):
    try:
        with open(path, "w") as f:
            pass  # Create a new file
    except OSError as e:
        print(e)


def create_dir(path):
    try:
        os.mkdir(path)
    except OSError as e:
        print(e)


# Create an empty file called "output.txt" in the current working directory and in the filesystem root
create_file("output.txt")
create_file(os.sep + "output.txt")

# Create an empty directory called "docs" in the current working directory and in the filesystem root
create_dir("docs")
create_dir(os.sep + "docs")
