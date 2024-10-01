import os
import sys


def main():
    # Get the file name from the command line arguments or exit with an error message if none are supplied
    file_name = sys.argv[1] if len(sys.argv) > 1 else sys.exit("No file name supplied")

    # Check the size of the file in the current working directory and exit with an error message if it does not exist or is not a regular file
    try:
        metadata = os.stat(file_name)
    except OSError as e:
        sys.exit("Could not read file metadata: {}".format(e))

    # Exit with an error message if the file size is 0 bytes
    if metadata.st_size == 0:
        sys.exit("File is empty")

    # Print the file size in bytes to standard output
    print("Size of {} is {} bytes".format(file_name, metadata.st_size))


if __name__ == "__main__":
    main()
