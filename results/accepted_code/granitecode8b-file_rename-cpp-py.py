import os

# Rename a file in the current working directory
os.rename("input.txt", "output.txt")
# Rename a directory in the current working directory
os.rename("docs", "mydocs")
# Rename a file in the root directory (i.e., /)
os.rename("/input.txt", "/output.txt")
# Rename a directory in the root directory (i.e., /)
os.rename("/docs", "/mydocs")
