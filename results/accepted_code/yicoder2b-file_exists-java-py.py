import os


def verify_file_exists(file_path):
    return os.path.isfile(file_path)


print(verify_file_exists("docs/input.txt"))
print(verify_file_exists("/docs/input.txt"))
