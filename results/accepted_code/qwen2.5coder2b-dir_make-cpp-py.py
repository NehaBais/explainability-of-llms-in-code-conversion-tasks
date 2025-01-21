import os


def mkdir(path):
    try:
        os.makedirs(path, exist_ok=True)
        return True
    except OSError as e:
        print(f"Error creating directory: {e}")
        return False


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: mkdir <path>")
        sys.exit(-1)

    if mkdir(sys.argv[1]):
        print("Directory created successfully.")
    else:
        sys.exit(-1)
