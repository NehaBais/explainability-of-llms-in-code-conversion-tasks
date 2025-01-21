import os

# Check for the existence of input.txt in the current working directory
file_path_current = "input.txt"
if os.path.isfile(file_path_current):
    print(f"{file_path_current} exists.")
else:
    print(f"{file_path_current} does not exist.")

# Check for the existence of input.txt in the filesystem root
file_path_root = "c:/input.txt"
if os.path.isfile(file_path_root):
    print(f"{file_path_root} exists.")
else:
    print(f"{file_path_root} does not exist.")

# Check for the existence of docs in the current working directory
dir_path_current = "docs"
if os.path.isdir(dir_path_current):
    print(f"{dir_path_current} exists.")
else:
    print(f"{dir_path_current} does not exist.")

# Check for the existence of docs in the filesystem root
dir_path_root = "c:/docs"
if os.path.isdir(dir_path_root):
    print(f"{dir_path_root} exists.")
else:
    print(f"{dir_path_root} does not exist.")
