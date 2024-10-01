import os

file_path_a = "input.txt"
file_path_b = "/input.txt"
print(f"{os.stat(file_path_a).st_size:,} B")
print(f"{os.stat(file_path_b).st_size:,} B")
