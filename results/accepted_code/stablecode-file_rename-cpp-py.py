import os
import shutil

# rename file/path 'input.txt' to 'output.txt' in current working directory
try:
    os.rename("input.txt", "output.txt"))
except FileNotFoundError:
    print(f"'input.txt' not found in the current working directory.")

# move 'docs' directory to a new location named 'mydocs' in the parent directory
source_directory = os.path.join('..', 'docs'))
destination_directory = os.path.join('..', 'mydocs'))
try:
    shutil.move(source_directory, destination_directory)
except FileNotFoundError:
    print(f"The source directory '{source_directory}' does not exist." )