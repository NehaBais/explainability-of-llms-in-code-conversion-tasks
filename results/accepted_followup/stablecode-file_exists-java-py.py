import os
# Check for current working directory
current_dir = os.getcwd()
file_path_1 = os.path.join(current_dir, "docs"))
file_in_docs = os.path.join(file_path_1, "input.txt"))
directory_in_docs = file_path_1 
exists_file_and_dir_1 = (os.path.exists(file_in_docs)) and ((os.path.isdir(directory_in_docs))))
# Check for root directory
root_dir = "/"
file_path_2 = os.path.join(root_dir, "docs"))
file_in_root_docs = os.path.join(file_path_2, "input.txt"))
directory_in_root_docs = file_path_2 
exists_file_and_dir_2 = (os.path.exists(file_in_root_docs)) and ((os.path.isdir(directory_in_root_docs))))