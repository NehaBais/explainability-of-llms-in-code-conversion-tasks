import os


def check_file(path):
    if os.path.isfile(path):
        return True
    else:
        return False


def check_directory(path):
    if os.path.isdir(path):
        return True
    else:
        return False


# Check for regular file in current working directory
input_txt = "input.txt"
docs = "docs"

print("input.txt is a regular file?", check_file(input_txt))
print("docs is a directory?", check_directory(docs))

# Check for both files and directories in the root of the filesystem
root_dir = "/"

if check_file(os.path.join(root_dir, input_txt)):
    print("/input.txt is a regular file?")

if check_directory(os.path.join(root_dir, docs)):
    print("/docs Is a directory?")
