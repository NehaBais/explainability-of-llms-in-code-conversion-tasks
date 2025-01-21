import os


def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
    except OSError as e:
        print(f"Error creating directory: {e}")
