import os


def main():
    # Check the size of input.txt in the current working directory
    file_a = "file.txt"
    if os.path.isfile(file_a):
        file_size = os.path.getsize(file_a)
        print(f"{file_size:,} B")

    # Check the size of input.txt in the root directory
    file_b = "/file.txt"
    if os.path.isfile(file_b):
        file_size = os.path.getsize(file_b)
        print(f"{file_size:,} B")


if __name__ == "__main__":
    main()
