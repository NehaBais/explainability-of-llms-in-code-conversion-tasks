'''
from pathlib import Path
import os

# Create directories if they don't exist
parent_directory = "./new"  # Replace with your desired parent directory
subdirectories = ["path", "to", "dir"]

for subdirectory in subdirectories:
    full_path = os.path.join(parent_directory, subdirectory)
    Path(full_path).mkdir(parents=True, exist_ok=True)

