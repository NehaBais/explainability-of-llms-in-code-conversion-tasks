import os


def print_file_size(filename):
    try:
        if filename[0] == "/":
            raise ValueError("Absolute paths not supported")
        filepath = f"{os.getcwd()}/{filename}"  # Using current working directory
        print(f"Size of file {filename} is ", os.stat(filepath).st_size, " bytes.")
    except ValueError as ve:
        print(ve)
    except FileNotFoundError:
        print("File not found in the current working directory.")
    except Exception as e:
        print(e)


print_file_size("input.txt")
print_file_size(
    "/input.txt"
)  # This will throw an error because it's using absolute paths which are not supported
