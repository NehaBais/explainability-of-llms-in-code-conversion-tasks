import os
def check_file_exists(path, is_directory=False):
 if is_directory:
 return os.path.isdir(path)
 else:
 return os.path.isfile(path)
print("input.txt is a regular file? ", check_file_exists("input.txt", False))
print("docs is a directory? ", check_file_exists("docs", True))
print("/input.txt is a regular file? ", check_file_exists("/input.txt", False))
print("/docs is a directory? ", check_file_exists("/docs", True))