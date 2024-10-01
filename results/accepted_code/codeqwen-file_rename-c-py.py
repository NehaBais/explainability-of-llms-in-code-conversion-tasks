import os

# Rename files in current directory
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Rename files in root directory
root = "/"
os.rename(f"{root}input.txt", f"{root}output.txt")
os.rename(f"{root}docs", f"{root}mydocs")
