import os

# Rename in current directory
try:
    os.rename("input.txt", "output.txt")
except FileNotFoundError as e:
    print(e)

try:
    os.rename("docs", "mydocs")
except FileNotFoundError as e:
    print(e)

# Rename in filesystem root directory
try:
    os.rename("/input.txt", "/output.txt")
except FileNotFoundError as e:
    print(e)

try:
    os.rename("/docs", "/mydocs")
except FileNotFoundError as e:
    print(e)
