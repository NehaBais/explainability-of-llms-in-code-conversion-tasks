import os
import sys


def main():
    file_name = (
        sys.argv[1] if len(sys.argv) > 1 else exit_err("No file name supplied", 1)
    )
    try:
        metadata = os.stat(file_name)
        print(f"Size of {file_name} is {metadata.st_size} bytes")
    except FileNotFoundError as e:
        exit_err(e, 2)


def exit_err(msg, code):
    sys.stderr.write("Error: {}\n".format(msg))
    sys.exit(code)


if __name__ == "__main__":
    main()
