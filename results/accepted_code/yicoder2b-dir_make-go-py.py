import os


def create_directory(dir_path):
    try:
        os.makedirs(dir_path, exist_ok=True)
    except OSError as error:
        print("Error occurred while creating directory:", error)
        return False
    else:
        print("Directory created successfully")
        return True
