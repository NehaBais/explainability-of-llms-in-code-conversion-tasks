import os

# Rename in current directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Changing to root directory / (for windows it's C:\)
# then renaming
old_path = os.getcwd()
os.chdir("/")
try:
    os.renames("input.txt", "output.txt")
    os.renames("docs", "mydocs")
finally:
    os.chdir(old_path)
