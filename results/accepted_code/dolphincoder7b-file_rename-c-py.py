import os

# Rename the file "input.txt" into "output.txt".
os.rename("input.txt", "output.txt")

# Rename the directory "docs" into "mydocs".
os.rename("docs", "mydocs")

# This will work only on Unix-like systems.
# However, if you are using Windows, you can do this:
import shutil

shutil.move("input.txt", "output.txt")
