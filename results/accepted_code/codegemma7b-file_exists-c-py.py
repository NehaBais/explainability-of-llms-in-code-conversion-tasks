import os


def check_reg(path):
    return os.path.isfile(path)


def check_dir(path):
    return os.path.isdir(path)


if __name__ == "__main__":
    # Current working directory
    cwd = os.getcwd()
    print(f"input.txt is a regular file? {check_reg(cwd + '/input.txt')}")
    print(f"docs is a directory? {check_dir(cwd + '/docs')}")

    # File and directory in root filesystem
    print(f"/input.txt is a regular file? {check_reg('/input.txt')}")
    print(f"/docs is a directory? {check_dir('/docs')}")
