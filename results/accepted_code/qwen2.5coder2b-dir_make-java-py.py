import os


def create_directory(path):
    try:
        os.makedirs(path)
        print("Directory successfully created")
    except OSError as error:
        print(error)


if __name__ == "__main__":
    create_directory("C:/parent/test")
