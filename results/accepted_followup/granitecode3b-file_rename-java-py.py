import os
def rename_file(oldname, newname):
 try:
 os.rename(oldname, newname)
 return True
 except FileNotFoundError:
 print(f"File or directory {oldname} not found.")
 return False
def test_rename(type, oldname, newname):
 if rename_file(oldname, newname):
 print(f"The following {type} called {oldname} was renamed as {newname}.")
 else:
 print(f"The following {type} called {oldname} could not be renamed into {newname}.")
test_rename("file", "input.txt", "output.txt")
test_rename("file", "/", "/output.txt")
test_rename("directory", "docs", "mydocs")
test_rename("directory", "/", "/mydocs")