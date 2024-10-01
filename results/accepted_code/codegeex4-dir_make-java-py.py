import os


def create_directory(path):
    try:
        # Check if directory already exists
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")
        else:
            print("Path already exists")
    except Exception as e:
        print(f"An error occurred: {e}")


# Test the function
create_directory("./path/to/dir")
