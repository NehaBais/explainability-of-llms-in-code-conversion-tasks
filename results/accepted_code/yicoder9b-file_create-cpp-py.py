import os
from pathlib import Path

# Create empty file in current working directory
open("output.txt", "w").close()
Path("/output.txt").touch()  # File at root level

# Create an empty directory in the current working directory and the filesystem root
os.mkdir("docs")
Path("/docs").mkdir(exist_ok=True)
