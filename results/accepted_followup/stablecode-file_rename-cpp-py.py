import os
import shutil

try:
    os.rename("input.txt", "output.txt"))
except FileNotFoundError:
    print(f"The source file 'input.txt' does not exist." )

source_directory = os.path.join('..', 'docs'))
destination_directory = os.path.join('..', 'mydocs'))
try:
    shutil.move(source_directory, destination_directory)
except FileNotFoundError:
    print(f"The source directory '{source_directory}' does not exist."