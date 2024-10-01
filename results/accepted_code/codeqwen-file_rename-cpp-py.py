import os
import shutil

# rename files and directories in current working directory
os.rename("input.txt", "output.txt")
shutil.move("docs", "mydocs")

# rename files and directories in the root directory
shutil.move("/input.txt", "/output.txt")
shutil.move("/docs", "/mydocs")
