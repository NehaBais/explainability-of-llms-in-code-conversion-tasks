import os
import shutil

# Rename a file.txt in the current dir
try:
    os.rename("input.txt", "output.txt")
except FileNotFoundError:
    print("The file does not exist")

# Rename a directory/folder
try:
    shutil.move("docs", "mydocs")
except FileNotFoundError:
    print("The folder does not exist")

# Rename a file in the filesystem root
try:
    os.rename("c:/input.txt", "c:/output.txt")
except FileNotFoundError:
    print("The file does not exist")

# Rename a directory/folder in the filesystem root
try:
    shutil.move("c:/docs", "c:/mydocs")
except FileNotFoundError:
    print("The folder does not exist")
