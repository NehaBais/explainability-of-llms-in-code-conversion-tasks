import os
from pathlib import Path
import shutil

# Create new empty files in the current working directory and root directory
with open("output.txt", "w") as f:
    pass
os.system("cd / && touch output.txt")

Path().mkdir(path="docs", parents=True, exist_ok=True)
shutil.rmtree("/docs")  # remove the directory if it exists

# Create new empty files in the root directory and current working directory
os.system("touch /output.txt")
with open("output.txt", "w") as f:
    pass
Path("/").mkdir(path="docs", parents=True, exist_ok=True)
