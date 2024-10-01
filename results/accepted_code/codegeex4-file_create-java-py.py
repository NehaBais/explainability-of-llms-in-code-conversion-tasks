import os


def create_file_and_directory():
    try:
        with open("output.txt", "w") as f:
            pass  # Create empty file of size 0 bytes
        os.mkdir("docs")  # Create an empty directory called "docs"

        current_dir = os.getcwd()
        root_dir = "/"

        with open(os.path.join(current_dir, "output.txt"), "w") as f:
            pass  # Create empty file of size 0 bytes in the current working directory
        os.mkdir(
            os.path.join(current_dir, "docs")
        )  # Create an empty directory called "docs" in the current working directory

        with open(os.path.join(root_dir, "output.txt"), "w") as f:
            pass  # Create empty file of size 0 bytes in the filesystem root
        os.mkdir(
            os.path.join(root_dir, "docs")
        )  # Create an empty directory called "docs" in the filesystem root

    except IOError as e:
        print(e)


create_file_and_directory()
