import os

# here
file_name = "input.txt"
new_file_name = "output.txt"
os.rename(file_name, new_file_name)

dir_name = "docs"
new_dir_name = "mydocs"
os.rename(dir_name, new_dir_name)

# root
file_name = "/input.txt"
new_file_name = "/output.txt"
os.rename(file_name, new_file_name)

dir_name = "/docs"
new_dir_name = "/mydocs"
os.rename(dir_name, new_dir_name)
