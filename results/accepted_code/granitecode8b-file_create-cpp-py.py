import os
import shutil

with open("output.txt", "w"):
    pass
os.makedirs("docs")
with open("/output.txt", "w"):
    pass
shutil.copytree(".", "/docs")  # copy current directory to /docs
