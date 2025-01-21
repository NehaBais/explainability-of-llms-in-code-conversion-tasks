import os
def rename_file(oldname, newname):
 try:
 # Rename file (or directory)
 os.rename(oldname, newname)
 return True
 except OSError as e:
 print(f"Error renaming {oldname}: {e}")
 return False