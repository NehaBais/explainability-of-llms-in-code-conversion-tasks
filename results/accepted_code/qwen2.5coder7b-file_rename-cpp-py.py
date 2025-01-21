import os

# Rename files and directories in the current working directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Rename files and directories at the filesystem root
root_dir = "/"
os.rename(root_dir + "input.txt", root_dir + "output.txt")
os.rename(root_dir + "docs", root_dir + "mydocs")
