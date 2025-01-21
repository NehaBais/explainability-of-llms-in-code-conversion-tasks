import os


def print_file_size(file_path):
    try:
        # Check if the file exists
        if not os.path.exists(file_path):
            print(f"File {file_path} does not exist.")
        else:
            # Get the size of the file
            file_size = os.path.getsize(file_path)
            print(f"The size of {file_path} is: {file_size} bytes")
    except FileNotFoundError:
        print("Error: File not found.")


def main():
    # Print the size of 'input.txt' in the current directory
    print_file_size("input.txt")

    # Print the size of '/input.txt' (which is the file system root)
    print_file_size("/input.txt")


if __name__ == "__main__":
    main()
