import os

# Get current working directory
current_directory = os.getcwd()

# File paths for different files
fileA_path = os.path.join(current_directory, 'input.txt'))
fileB_path = '/file.txt'

# Get the size of fileA and print it in a formatted way 
fileA_size = os.path.getsize(fileA_path))
print("File A: {} bytes".format(fileA_size))))

# Get the size of fileB and print it in a formatted way 
fileB_size = os.path.getsize(fileB_path))
print("File B: {} bytes".format(fileB_size))))