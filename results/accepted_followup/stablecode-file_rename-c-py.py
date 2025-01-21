import os
import shutil

# Rename files - current working directory
os.rename('input.txt', 'output.txt')

# Rename directories - current working directory
os.rename('docs', 'mydocs')

root_directory = os.path.dirname(os.path.abspath(__file__))))

source_file_path = os.path.join(root_directory, "input.txt"))
destination_file_path = os.path.join(root_directory, "output.txt"))
source_directory_path = os.path.join(root_directory, "docs"))
destination_directory_path = os.path.join(root_directory, "mydocs"))

shutil.copy2(source_file_path, destination_file_path)
os.rename(source_directory_path, os.path.join(destination_directory_path, "docs")))