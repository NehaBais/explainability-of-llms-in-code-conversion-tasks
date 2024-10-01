import os


def create_directory(path):
    if not os.path.exists(path):
        try:
            os.makedirs(path)
            print("Directory created successfully.")
            return 0
        except OSError:
            print("Failed to create directory: " + path)
            return -1

    else:
        print("Directory already exists.")
        return 0


if __name__ == "__main__":
    import sys

    sys.exit(create_directory(sys.argv[1]))
