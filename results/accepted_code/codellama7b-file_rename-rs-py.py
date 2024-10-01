import os


def main():
    err = "File move error"

    # Rename input.txt to output.txt in current working directory
    try:
        os.rename("input.txt", "output.txt")
    except OSError as e:
        print(err)

    # Rename docs to mydocs in current working directory
    try:
        os.rename("docs", "mydocs")
    except OSError as e:
        print(err)

    # Rename input.txt to output.txt in filesystem root
    try:
        os.rename("/input.txt", "/output.txt")
    except OSError as e:
        print(err)

    # Rename docs to mydocs in filesystem root
    try:
        os.rename("/docs", "/mydocs")
    except OSError as e:
        print(err)
