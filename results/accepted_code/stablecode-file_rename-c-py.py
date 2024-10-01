import os
import shutil

# Rename files - current working directory
os.rename('input.txt', 'output.txt')

# Rename directories - current working directory
os.rename('docs', 'mydocs')

# Get the root directory path
root_directory = os.path.dirname(os.path.abspath(__file__))))

# Construct the full source and destination file paths
source_file_path = os.path.join(root_directory, "input.txt"))
destination_file_path = os.path.join(root_directory, "output.txt"))
source_directory_path = os.path.join(root_directory, "docs"))
destination_directory_path = os.path.join(root_directory, "mydocs"))

# Copy the source file to the destination file
shutil.copy2(source_file_path, destination_file_path)

# Move (rename) the source directory to the destination directory
os.rename(source_directory_path, os.path.join(destination_directory_path, "docs")))