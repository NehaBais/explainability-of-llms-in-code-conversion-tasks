import os
def verify_file_and_dir(path):
 if os.path.isfile(path) or os.path.isdir(path):
 return True
 else:
 return False
current_working_directory = os.getcwd()
if verify_file_and_dir("input.txt") and verify_file_and_dir("docs"):
 print("Input file and directory exist in the current working directory.")
else:
 print("Input file or directory does not exist in the current working directory.")
filesystem_root = "/"
if verify_file_and_dir(filesystem_root + "input.txt") and verify_file_and_dir(filesystem_root + "docs"):
 print("Input file and directory exist in the filesystem root.")
else:
 print("Input file or directory does not exist in the filesystem root.")