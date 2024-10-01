import shutil

# Rename a file in the current working directory
shutil.move("input.txt", "output.txt")
# Rename a directory in the current working directory
shutil.move("docs", "mydocs")
# Rename a file in the root filesystem directory
shutil.move("/input.txt", "/output.txt")
# Rename a directory in the root filesystem directory
shutil.move("/docs", "/mydocs")
