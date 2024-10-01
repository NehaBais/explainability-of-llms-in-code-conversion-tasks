import os

# Rename input.txt to output.txt in the current working directory
os.rename("input.txt", "output.txt")
# Rename docs to mydocs in the filesystem root
os.rename("/docs", "/mydocs")
