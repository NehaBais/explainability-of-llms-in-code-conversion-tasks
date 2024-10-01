import os

file_a_path = "file.txt"
file_b_path = "/file.txt"

file_a_size = os.path.getsize(file_a_path)
file_b_size = os.path.getsize(file_b_path)

print(f"{file_a_size:,} B")
print(f"{file_b_size:,} B")
