import os

# For current working directory
if os.path.exists("docs") and os.path.isfile("docs/input.txt"):
    print("The file and directory exist in the current working directory.")
else:
    print("The file or directory does not exist in the current working directory.")

# For filesystem root
root_dir = "/"

if os.path.exists(os.path.join(root_dir, "docs")) and os.path.isfile(
    os.path.join(root_dir, "docs/input.txt")
):
    print("The file and directory exist in the filesystem root.")
else:
    print("The file or directory does not exist in the filesystem root.")
