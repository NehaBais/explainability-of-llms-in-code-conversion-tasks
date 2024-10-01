import os

# Rename a file in the current working directory
os.rename("input.txt", "output.txt")
# Rename a file in the filesystem root
os.rename("/input.txt", "/output.txt")
# Rename a directory in the current working directory
os.makedirs("mydocs", exist_ok=True)
os.rename("docs", "mydocs")
# Rename a directory in the filesystem root
os.makedirs("/mydocs", exist_ok=True)
os.rename("/docs", "/mydocs")
