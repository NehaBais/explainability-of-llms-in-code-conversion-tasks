import os

# First operation:Rename in current directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Second operation: Rename in root filesystem
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
