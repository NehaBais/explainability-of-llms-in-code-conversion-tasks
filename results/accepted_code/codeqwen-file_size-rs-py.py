import os


def get_file_size(file_name):
    try:
        file_path = os.path.join(
            os.getcwd(), file_name
        )  # Get the current working directory and append the file name
        if not os.path.isfile(file_path):
            raise FileNotFoundError("File does not exist")

        file_size = os.path.getsize(file_path)
        print(f"Size of {file_name} is {file_size} bytes")
    except Exception as e:
        print(f"An error occurred: {str(e)}")


def main():
    try:
        if len(sys.argv) > 1:
            file_name = sys.argv[1]  # Get the file name from command line arguments
        else:
            raise ValueError("No file name supplied")

        get_file_size(file_name)
    except Exception as e:
        print(f"An error occurred: {str(e)}")


if __name__ == "__main__":
    main()
