import os

# Rename in current working directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Rename at filesystem root
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
