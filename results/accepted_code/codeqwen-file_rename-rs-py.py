import shutil
import os

# here
try:
    shutil.move("input.txt", "output.txt")
except FileNotFoundError as e:
    print(e)
else:
    os.remove("/input.txt")  # remove the original file if moved successfully

try:
    shutil.move("docs", "mydocs")
except FileNotFoundError as e:
    print(e)
else:
    os.rmdir("/docs")  # delete the original directory if moved successfully

# root
try:
    shutil.move("/input.txt", "/output.txt")
except FileNotFoundError as e:
    print(e)

try:
    shutil.move("/docs", "/mydocs")
except FileNotFoundError as e:
    print(e)
