import os


def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
        print("Directory created successfully.")
    except Exception as e:
        print(f"An error occurred: {e}")


# Example usage
create_directory("./path/to/dir")
