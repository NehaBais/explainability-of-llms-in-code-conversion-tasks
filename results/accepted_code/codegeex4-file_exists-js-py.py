import os


def check_existence(path):
    if os.path.isfile(path) or os.path.isdir(path):
        print(f"{path} exists")
    else:
        print(f"{path} does not exist")


# Check for file and directory in current working directory
check_existence("input.txt")
check_existence("docs")

# Check for file and directory in filesystem root (this will raise an error if you do not have permissions)
try:
    check_existence(
        "/input.txt"
    )  # Note: This might need to be adjusted depending on your OS
    check_existence("/docs")
except Exception as e:
    print(e)
