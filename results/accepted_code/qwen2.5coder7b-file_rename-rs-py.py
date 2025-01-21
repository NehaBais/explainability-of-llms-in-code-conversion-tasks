import os


def rename_files_and_directory():
    err = "File move error"

    # Renaming files and directory in the current working directory
    try:
        os.rename("input.txt", "output.txt")
        print("Renamed input.txt to output.txt in the current working directory.")

        os.rename("docs", "mydocs")
        print("Renamed docs to mydocs in the current working directory.")

    except Exception as e:
        print(f"{err}: {e}")

    # Renaming files and directory in the filesystem root
    try:
        os.rename("/input.txt", "/output.txt")
        print("Renamed /input.txt to /output.txt in the filesystem root.")

        os.rename("/docs", "/mydocs")
        print("Renamed /docs to /mydocs in the filesystem root.")

    except Exception as e:
        print(f"{err}: {e}")


rename_files_and_directory()
