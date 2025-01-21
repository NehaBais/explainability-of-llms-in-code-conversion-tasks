import os
# Verify file exists in current working directory
if not os.path.isfile("input.txt"):
 print("File input.txt does not exist.")
 # Verify file exists in /root/docs directory
 if not os.path.isfile("/root/docs/input.txt"):
 print("File input.txt does not exist in /root/docs directory.")
# Verify folder exists in current working directory
if not os.path.isdir("docs"):
 print("Folder docs does not exist.")
 # Verify folder exists in /root directory
 if not os.path.isdir("/root/docs"):
 print("Folder docs does not exist in /root directory.")