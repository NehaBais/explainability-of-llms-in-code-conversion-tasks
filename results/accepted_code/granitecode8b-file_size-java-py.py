import os

file_path = "input.txt"
# For a file in the current working directory
file_size = os.path.getsize(file_path)
print("%,d B" % (file_size))
# For a file in the file system root
file_system_root = "/"
file_path = os.path.join(file_system_root, "input.txt")
file_size = os.path.getsize(file_path)
print("%,d B" % (file_size))
