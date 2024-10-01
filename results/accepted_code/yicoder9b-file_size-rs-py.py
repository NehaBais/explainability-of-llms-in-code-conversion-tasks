import os
import sys


def main():
    try:
        # Verify size of a file called input.txt in the current working directory
        file_name = "input.txt"
        size = os.path.getsize(file_name)
        print("Size of {} is {} bytes".format(file_name, size))
    except Exception as e:
        sys.stderr.write("Error: {}".format(str(e)))
        sys.exit(2)


main()
