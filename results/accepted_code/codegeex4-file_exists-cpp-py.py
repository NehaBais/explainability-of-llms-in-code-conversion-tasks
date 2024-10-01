import os


def file_exists(path):
    if os.path.exists(path):
        if os.path.isdir(path):
            print(f"{path} is a directory")
        else:
            try:
                size = os.stat(path).st_size
                print(f"{path} exists with a file size of {size} bytes.")
            except FileNotFoundError:
                print(f"{path} does not exist")
    else:
        print(f"{path} does not exist")


# Verify in the current working directory
file_exists("input.txt")
file_exists("zero_length.txt")
file_exists("docs/input.txt")
file_exists("docs/zero_length.txt")

# Verify in the filesystem root
file_exists("/root/input.txt")  # Replace "/root" with your actual root path
file_exists("/root/zero_length.txt")  # Replace "/root" with your actual root path
file_exists("/root/docs/input.txt")  # Replace "/root" with your actual root path
file_exists("/root/docs/zero_length.txt")  # Replace "/root" with your actual root path
