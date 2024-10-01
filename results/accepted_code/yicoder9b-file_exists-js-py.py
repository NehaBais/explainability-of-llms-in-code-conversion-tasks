import os

file_exists = os.path.isfile("input.txt")
dir_exists = os.path.isdir("docs")

print(f"File exists in current directory? {'Yes' if file_exists else 'No'}")
print(f"Directory exists in current directory? {'Yes' if dir_exists else 'No'}")

file_exists = os.path.isfile("/input.txt")
dir_exists = os.path.isdir("/docs")

print(f"File exists in root directory? {'Yes' if file_exists else 'No'}")
print(f"Directory exists in root directory? {'Yes' if dir_exists else 'No'}")
