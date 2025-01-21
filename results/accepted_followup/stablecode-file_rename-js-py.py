import os
import shutil

# Move input.txt file
source_file = "input.txt"
destination_file = "output.txt"
shutil.copy(os.path.join(".", source_file)), os.path.join(".", destination_file))
os.remove(os.path.join(".", source_file))))

# Move input.txt in docs folder
source_folder = "docs"
destination_folder = "mydocs"
shutil.copytree(os.path.join(source_folder, source_file)), os.path.join(destination_folder, source_file))
try:
    shutil.move(os.path.join(".", destination_folder), os.path.join(".", destination_folder)))
except OSError as e: 
    print("Error:  %s" % e))