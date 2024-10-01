import os


def print_stat(path):
    try:
        stat_info = os.stat(path)
        if os.path.isdir(path):
            print(f"{path} is a directory")
        else:
            print(f"{path} is a file")
    except FileNotFoundError:
        print(f"File or directory {path} does not exist.")


def main():
    current_dir = os.getcwd()
    print_stat("input.txt")
    print_stat(os.path.join(current_dir, "input.txt"))
    print_stat("docs")
    print_stat(os.path.join(current_dir, "docs"))

    root_dir = "/"
    print_stat("input.txt")
    print_stat(os.path.join(root_dir, "input.txt"))
    print_stat("docs")
    print_stat(os.path.join(root_dir, "docs"))
