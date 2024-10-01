import os


def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")

    except Exception as e:
        print(e)


# Invoke the function with your desired path
create_directory("C:/parent/test")
