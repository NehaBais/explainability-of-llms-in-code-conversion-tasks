import os


def create_dir_file():
    FILE_NAME = "output.txt"
    DIR_NAME = "docs"

    try:
        current_path = os.getcwd()

        # Create file and directory in the current path
        with open(os.path.join(current_path, FILE_NAME), "w"):
            pass

        if not os.path.exists(DIR_NAME):
            os.makedirs(DIR_NAME)

        # Create file and directory in root path ("/")
        with open("/" + FILE_NAME, "w"):
            pass

        if not os.path.exists("/" + DIR_NAME):
            os.makedirs("/" + DIR_NAME)

    except Exception as e:
        print(f"Error: {str(e)}")


if __name__ == "__main__":
    create_dir_file()
