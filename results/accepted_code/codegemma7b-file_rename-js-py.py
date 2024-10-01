import os

# Rename files in the current working directory
os.rename("input.txt", "output.txt")
os.rename("/input.txt", "/output.txt")

# Rename directories in the filesystem root
os.rename("/docs", "/mydocs")
os.rename("/c:/docs", "/c:/mydocs")
