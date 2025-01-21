import os


def main():
    file_name = input("Enter a file name: ")

    if not os.path.exists(file_name):
        print(f"Error: {file_name} does not exist")
        return

    try:
        size = os.path.getsize(file_name)
        print(f"Size of {file_name} is {size} bytes")
    except Exception as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()
