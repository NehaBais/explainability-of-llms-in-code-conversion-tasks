import os
import shutil

# here
shutil.move("input.txt", "output.txt")
shutil.move(
    "/input.txt", "/output.txt"
)  # '/' denotes the filesystem root on Unix-based systems (including MacOS and Linux)
shutil.move("docs/", "mydocs/")
shutil.move("/docs/", "/mydocs/")
