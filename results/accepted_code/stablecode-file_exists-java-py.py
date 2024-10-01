import os

# Check for current working directory
current_dir = os.getcwd()
file_path_1 = os.path.join(current_dir, "docs"))
file_path_2 = os.path.join("/", "docs"))
file_in_docs = os.path.join(file_path_1, "input.txt"))
directory_in_docs = file_path_1 
file_in_root_docs = os.path.join(file_path_2, "input.txt"))
directory_in_root_docs = file_path_2 

# Check if files and directories exist
exists_file_and_dir_1 = os.path.exists(file_in_docs) and os.path.isdir(directory_in_docs))
exists_file_and_dir_2 = (os.path.exists("/docs/input.txt") or 
                                             os.path.islink("/docs/input.txt"))) and ((directory_in_root_docs == "/docs") or os.path.isdir(directory_in_root_docs))))