import shutil

# Move the file in the current working directory
shutil.move("input.txt", "output.txt")
# Move the file to the filesystem root
shutil.move("/input.txt", "/output.txt")
# Move the directory in the current working directory
shutil.move("docs", "mydocs")
# Move the directory to the filesystem root
shutil.move("/docs", "/mydocs")
