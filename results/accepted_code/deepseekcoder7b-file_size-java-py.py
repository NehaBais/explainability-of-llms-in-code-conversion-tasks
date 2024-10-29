import os


def main():
    filenameA = "input.txt"
    file_size_in_bytesA = os.path.getsize(filenameA)
    print("{:,} B".format(file_size_in_bytesA))

    filenameB = "/input.txt"
    try:  # in case the file does not exist at the specified path
        file_size_in_bytesB = os.path.getsize(filenameB)
        print("{:,} B".format(file_size_in_bytesB))
    except FileNotFoundError:
        print(
            'The file "%s" does not exist.' % filenameB
        )  # error handling for non-existent files


if __name__ == "__main__":
    main()
