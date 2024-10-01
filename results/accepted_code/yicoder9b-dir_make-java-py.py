import os


def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
    except Exception as e:
        print(str(e))


if __name__ == "__main__":
    create_directory("C:/parent/test")
