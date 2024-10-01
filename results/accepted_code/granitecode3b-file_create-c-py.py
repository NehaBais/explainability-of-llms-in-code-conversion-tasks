import os

# Create an empty file called "output.txt" in the current working directory and set its permissions to 0640 (rw-r-----)
with open("output.txt", "w"):
    pass
# Set the permissions of the "docs" directory to 0750 (rwxr-x---)
os.makedirs("docs", mode=0o750)
