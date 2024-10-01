Here is the code converted from C to Python:
```
import os
# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory
fd = open("output.txt", "w") # rights 0640 for rw-r-----
fd.close()
os.mkdir("docs") # rights 0750 for rwxr-x---
# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the filesystem root
fd = open("/output.txt", "w") # rights 0640 for rw-r-----
fd.close()
os.mkdir("/docs") # rights 0750 for rwxr-x---
```
Note: The code above assumes that you have the necessary permissions to create files and directories in the current working directory and the root filesystem. If you don't have sufficient permissions, you may need to run the code with elevated privileges using sudo or a similar tool.

