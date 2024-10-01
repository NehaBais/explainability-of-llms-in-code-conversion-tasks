import os


def main():
    try:
        file_name = input("Enter the name of your file: ")
        metadata = os.stat(file_name)

        print(f"Size of {file_name} is {metadata.st_size} bytes")
    except FileNotFoundError:
        print(f"Error: The file '{file_name}' does not exist.")
        exit_err("The specified file could not be found", 1)
    except Exception as e:
        exit_err(e, 2)


def exit_err(msg, code):
    print(f"Error: {msg}")
    exit(code)


if __name__ == "__main__":
    main()
