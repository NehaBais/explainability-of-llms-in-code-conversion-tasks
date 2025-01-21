import os


def create_file(filename):
    try:
        open(
            filename, "w"
        ).close()  # Open the file for writing and close it immediately
        print(f"File {filename} created!")
    except IOError as e:
        print(e)


def create_directory(directory_name):
    try:
        os.makedirs(directory_name)  # Create directory if it does not exist
        print(f"Directory {directory_name} created!")
    except OSError as e:
        print(e)


if __name__ == "__main__":
    create_file("input.txt")
    create_file("/input.txt")
    create_directory("docs")
    create_directory("/docs")
