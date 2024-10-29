import os
import shutil

# Rename here (in current working directory)
os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

# Rename in filesystem root
shutil.move("C:/Users/UserName/Desktop/output.txt", "C:/")
shutil.move("C:/Users/UserName/Desktop/mydocs", "C:/")
