import os

# Rename in current working directory
try:
    os.rename("input.txt", "output.txt")
except FileNotFoundError:
    print("File not found in the current directory")

try:
    os.rename("docs", "mydocs")
except FileNotFoundError:
    print("Directory not found in the current directory")

# Rename at filesystem root
try:
    os.rename("/input.txt", "/output.txt")
except FileNotFoundError:
    print("File not found at the filesystem root")

try:
    os.rename("/docs", "/mydocs")
except FileNotFoundError:
    print("Directory not found at the filesystem root")
