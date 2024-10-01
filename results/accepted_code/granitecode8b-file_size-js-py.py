import os

file_path = "input.txt"
file_size = os.stat(file_path).st_size
print(f"The size of {file_path} is {file_size} bytes")
file_path = "/c:/input.txt"
file_size = os.stat(file_path).st_size
print(f"The size of {file_path} is {file_size} bytes")
