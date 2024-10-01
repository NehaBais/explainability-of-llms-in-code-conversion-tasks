import os
import sys


def main():
    file_path = sys.argv[1]
    try:
        metadata = os.stat(file_path)
        print("Size of {} bytes".format(metadata.st_size))
    except FileNotFoundError as e:
        print("Error: File not found")
    except OSError as e:
        print("Error:", e)
