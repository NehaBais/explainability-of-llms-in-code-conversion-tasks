import os
import shutil

# Current working directory
current_dir = os.getcwd()

# Moving files
for filename in ["input.txt", "c:/input.txt"]:
    if os.path.exists(filename):
        shutil.move(filename, current_dir + "/output.txt")

# Moving directories
for foldername in ["docs", "c:/docs"]:
    if os.path.exists(foldername):
        shutil.move(foldername, current_dir + "/mydocs")
