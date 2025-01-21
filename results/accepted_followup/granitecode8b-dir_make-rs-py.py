import os
def create_directory(path):
 try:
 os.makedirs(path, exist_ok=True)
 except OSError:
 print("Error occurred while creating directory!")
create_directory("./path/to/dir")