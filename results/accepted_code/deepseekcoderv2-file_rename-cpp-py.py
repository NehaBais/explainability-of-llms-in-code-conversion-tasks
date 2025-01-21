import os

# Rename file in the current working directory
os.rename("input.txt", "output.txt")

# Rename directory in the current working directory
os.rename("docs", "mydocs")

# Rename file in the filesystem root
os.rename("/input.txt", "/output.txt")

# Rename directory in the filesystem root
os.rename("/docs", "/mydocs")
