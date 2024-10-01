import os

file1 = "input.txt"
file2 = "/input.txt"

try:
    size1 = os.stat(file1).st_size
    print(size1)
except FileNotFoundError:
    print("File", file1, "does not exist")

try:
    size2 = os.stat(file2).st_size
    print(size2)
except FileNotFoundError:
    print("File", file2, "does not exist")
