import os


def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
        print("Path successfully created")
    except Exception as e:
        print(e)


create_directory("C:/parent/test")
