import os

# Rename in current working directory
os.rename("input.txt", "output.txt")
os.rename(
    "/input.txt", "/output.txt"
)  # Assuming you have permission to rename files outside your cwd
os.rename("docs", "mydocs")
os.rename("/docs", "/mydocs")
