import os
import shutil

# This will rename "input.txt" to "output.txt" in the current working directory
os.rename("input.txt", "output.txt")

# And this will rename "docs" to "mydocs" in the current working directory
shutil.move("docs", "mydocs")

# This will rename "/input.txt" to "/output.txt", assuming you are running this script from the filesystem root
os.rename("/input.txt", "/output.txt")

# And this will rename "/docs" to "/mydocs", assuming you are running this script from the filesystem root
shutil.move("/docs", "/mydocs")
