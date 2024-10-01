import os, sys


def main():
    file_name = sys.argv[1] if len(sys.argv) > 1 else "input.txt"

    try:
        metadata = os.stat(file_name)
    except FileNotFoundError as e:
        print(f"Error: {e}"), exit(2)

    print(f"Size of file.txt is {metadata.st_size} bytes")


if __name__ == "__main__":
    main()
