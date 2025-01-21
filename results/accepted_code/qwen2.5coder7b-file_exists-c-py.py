import os


def check_file(path):
    return os.path.isfile(path)


def check_directory(path):
    return os.path.isdir(path)


# Check for current working directory
print("input.txt is a regular file?", "yes" if check_file("input.txt") else "no")
print("docs is a directory?", "yes" if check_directory("docs") else "no")

# Check for filesystem root
root_path = "/"
print(
    "/input.txt is a regular file?",
    "yes" if check_file(root_path + "input.txt") else "no",
)
print("/docs is a directory?", "yes" if check_directory(root_path + "docs") else "no")
