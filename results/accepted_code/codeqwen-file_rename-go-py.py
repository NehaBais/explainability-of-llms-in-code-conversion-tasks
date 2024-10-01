import os
import shutil

# Here
os.rename("input.txt", "output.txt")
shutil.move("/docs", "/mydocs")

# Filesystem root
os.rename(
    "/root/input.txt", "/root/output.txt"
)  # Update '/root' to the correct path of your filesystem root if it isn't already
shutil.move("/root/docs", "/root/mydocs")
