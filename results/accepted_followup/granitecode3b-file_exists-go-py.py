import os
def print_stat(p):
 if not os.path.exists(p):
 print(f"{p} does not exist")
 else:
 if os.path.isdir(p):
 print(f"{p} is a directory")
 else:
 print(f"{p} is a file")
print_stat("input.txt") # current working directory
print_stat("/input.txt") # root directory
print_stat("docs") # current working directory
print_stat("/docs") # root directory