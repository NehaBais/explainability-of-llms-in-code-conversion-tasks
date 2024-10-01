import shutil

# Rename file here:
shutil.move("input.txt", "output.txt")

# Rename file in root filesystem:
shutil.move("c:/input.txt", "c:/output.txt")

# Rename directory here:
shutil.move("docs", "mydocs")

# Rename directory in root filesystem:
shutil.move("c:/docs", "c:/mydocs")
