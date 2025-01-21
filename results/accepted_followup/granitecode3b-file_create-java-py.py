import os
try:
 with open("output.txt", "w"):
 pass
 
 with open(os.path.join(os.sep, "output.txt"), "w") as f:
 f.write("")
 
 os.makedirs("docs")
 os.makedirs(os.path.join(os.sep, "docs"))
except IOError as e:
 print(e)