import os

# Rename a file in the current working directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")
# Rename a file in the filesystem root
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
