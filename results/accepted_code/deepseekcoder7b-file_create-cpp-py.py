import os


def main():
    with open("output.txt", "w") as f:
        pass  # Do nothing but write empty file.

    with open("/output.txt", "w") as f:
        pass  # Write an empty file at filesystem root level.

    os.makedirs("docs", exist_ok=True)
    try:
        os.makedirs("/docs", exist_ok=True)
    except FileNotFoundError:
        print("/docs could not be created as the parent directory does not exist.")


if __name__ == "__main__":
    main()
