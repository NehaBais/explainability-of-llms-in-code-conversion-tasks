import os

# Rename a file
os.rename("input.txt", "output.txt")
# Rename a directory
os.rename("docs", "mydocs")
# Move a file from the current working directory to another location
os.rename("input.txt", "c:/output.txt")
# Move a directory from the current working directory to another location
os.rename("docs", "c:/mydocs")
