import os
import shutil

# Move input.txt file
source_file = "input.txt"
destination_file = "output.txt"
shutil.copy(source_file, destination_file)
os.remove(source_file)

# Move input.txt in docs folder
source_folder = "docs"
destination_folder = "mydocs"
shutil.copytree(os.path.join(source_folder, source_file)), os.path.join(destination_folder, source_file))


# Move mydocs directory 
source_directory = "mydocs"
destination_directory = "/"

try:
    shutil.move(source_directory, destination_directory)
except OSError as e: 
    print("Error: %s" % e))