import os


def create_directory(path):
    try:
        if not os.path.exists(path):
            os.makedirs(path)
            print("Path successfully created")
        else:
            print("Path already exists")
    except Exception as e:
        print(f"An error occurred: {e}")


# Example usage
create_directory("C:/parent/test")
