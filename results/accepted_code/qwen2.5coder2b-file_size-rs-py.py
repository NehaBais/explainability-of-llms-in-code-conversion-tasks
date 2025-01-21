import os


def main():
    file_name = input("Enter the name of the file: ")

    try:
        with open(file_name, "r") as file:
            size = os.path.getsize(file_name)
            print(f"Size of {file_name} is {size} bytes")

    except FileNotFoundError:
        print("Error: File not found")
    except IOError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()
