import os

# create file in current directory
open("output.txt", "w").close()
os.chmod("output.txt", 0o640)  # permissions rw-r-----

# create empty directory
os.mkdir("docs", mode=0o750)  # rights rwxr-x---

# create file in filesystem root (assumed to be '/')
open("/output.txt", "w").close()
os.chmod("/output.txt", 0o640)  # permissions rw-r-----

# create empty directory in filesystem root
os.mkdir("/docs", mode=0o750)  # rights rwxr-x---
