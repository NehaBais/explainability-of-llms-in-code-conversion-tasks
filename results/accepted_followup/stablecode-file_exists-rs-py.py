import os

def check_file(path):
    if not os.path.exists(path):
        print(f"{path} does not exist.")
    else:
        try:
            info = os.stat(path)
            print(f"{path} is a file of size {info.st_size} bytes.")

            if stat.S_ISDIR(info.st_mode):
                print(f"{path} is a directory.")
        except Exception as e:
            print(f"Failed to check {path}. Error: {str(e)}")


def main():
    # Current working directory
    current = os.getcwd()
    check_file(os.path.join(current, "input.txt"))
    check_file(os.path.join(current, "docs"))

    # File and directory in the filesystem root
    root = os.path.join("/", "input.txt"))
    root_dir = os.path.join("/", "docs"))
    check_file(root)
    check_file(root_dir)


if __name__ == "__main__":
    main()