import os
def rename_file():
 err = "File move error"
 try:
 os.rename("input.txt", "output.txt")
 except OSError as e:
 print(err)
try:
 os.rename("docs", "mydocs")
except OSError as e:
 print(err)
try:
 os.rename("/input.txt", "/output.txt")
except OSError as e:
 print(err)
try:
 os.rename("/docs", "/mydocs")
except OSError as e:
 print(err)