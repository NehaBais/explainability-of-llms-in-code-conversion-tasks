import os

# Rename in the current working directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Rename in the filesystem root
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
