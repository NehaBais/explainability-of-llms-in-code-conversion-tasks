import os


def create_directory(directory):
    try:
        os.makedirs(directory)
        print("Directory successfully created")
    except Exception as e:
        print("Error occurred:", e)


create_directory("/parent/test")
