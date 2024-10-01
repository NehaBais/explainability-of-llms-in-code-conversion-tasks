import os

# Rename file in current directory
os.rename("input.txt", "output.txt")

# Rename directory in current directory
os.rename("docs", "mydocs")

# Rename file in root directory
os.rename("/input.txt", "/output.txt")

# Rename directory in root directory
os.rename("/docs", "/mydocs")
