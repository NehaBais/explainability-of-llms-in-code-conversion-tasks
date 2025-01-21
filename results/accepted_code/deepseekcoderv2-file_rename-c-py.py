import os

# In the current working directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# In the filesystem root
os.rename("/input.txt", "/output.txt")
os.rename("/docs", "/mydocs")
