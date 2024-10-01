import os


def create_file_and_directory():
    try:
        # Create a file called "output.txt" in the current working directory and an empty directory called "docs".
        with open("output.txt", "w") as f:
            pass
        os.makedirs("docs")
    except FileExistsError:
        pass
    try:
        # Create a file called "output.txt" in the filesystem root and an empty directory called "docs".
        with open("/output.txt", "w") as f:
            pass
        os.makedirs("/docs")
    except FileExistsError:
        pass


def error_handler(error, code):
    print(f"Error: {error}")
    exit(code)
