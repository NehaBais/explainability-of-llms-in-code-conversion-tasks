import os


def main():
    file_a = "file.txt"  # Assume file is in current working directory
    print(f"File A size: {os.path.getsize(file_a)} bytes")

    file_b = "/file.txt"  # Assume file is in the root of the file system
    print(f"File B size: {os.path.getsize(file_b)} bytes")
