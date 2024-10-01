import os
def rename_file(oldname, newname):
 try:
 # Rename file (or directory)
 os.rename(oldname, newname)
 return True
 except OSError as e:
 print(f"Error renaming {oldname}: {e}")
 return False
# Test the function
test_data = [("file", "input.txt", "output.txt"),
 ("file", os.sep + "input.txt", os.sep + "output.txt"),
 ("directory", "docs", "mydocs"),
 ("directory", os.sep + "docs" + os.sep, os.sep + "mydocs" + os.sep)]
for test_type, oldname, newname in test_data:
 print(f"Testing {test_type} rename:")
 if not rename_file(oldname, newname):
 print(f"{oldname} could not be renamed into {newname}.")