import os
import sys
def file_size(filename):
 try:
 st_size = os.stat(filename).st_size
 except OSError:
 print("File not found:", filename)
 return st_size
input_file_path = "input.txt"
current_directory_size = file_size(input_file_path)
print("Current directory size:", current_directory_size, "bytes")
root_directory_size = file_size("/")
print("Root directory size:", root_directory_size, "bytes")