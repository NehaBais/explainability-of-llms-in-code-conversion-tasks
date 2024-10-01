import os
def rename_file():
 err = "File move error"
 try:
 os.rename("input.txt", "output.txt")
 os.rename("docs", "mydocs")
 except OSError as e:
 print(f"{e.strerror} ({e.errno})")
def rename_root():
 err = "File move error"
 try:
 os.rename("/input.txt", "/output.txt")
 os.rename("/docs", "/mydocs")
 except OSError as e:
 print(f"{e.strerror} ({e.errno})")
rename_file()
rename_root()