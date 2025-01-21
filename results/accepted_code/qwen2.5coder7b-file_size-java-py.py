import os

file_a = "input.txt"
print(f"{os.path.getsize(file_a):,} B")

file_b = "/input.txt"
print(f"{os.path.getsize(file_b):,} B")
