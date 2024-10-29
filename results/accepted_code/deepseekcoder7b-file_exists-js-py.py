import os

# Checking for input.txt and docs in current working directory
print(os.path.exists("input.txt"))  # checks for 'input.txt'
print(os.path.isfile("input.txt"))  # checks if 'input.txt' is a file

print(os.path.exists("docs"))  # checks for 'docs' directory
print(os.path.isdir("docs"))  # checks if 'docs' is a directory

# Checking for input.txt and docs in filesystem root ("/")
root_path = "/"
full_file_path = os.path.join(root_path, "input.txt")
full_dir_path = os.path.join(root_path, "docs")

print(os.path.exists(full_file_path))  # checks for 'input.txt' in root path
print(os.path.isfile(full_file_path))  # checks if 'input.txt' is a file

print(os.path.exists(full_dir_path))  # checks for 'docs' directory in root path
print(os.path.isdir(full_dir_path))  # checks if 'docs' is a directory
