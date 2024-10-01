import os
import stat

os.mknod("output.txt")  # Create a regular file of size 0 bytes
os.mkdir("docs")  # Create an empty directory

os.chmod(
    "output.txt", stat.S_IWRITE | stat.S_IREAD
)  # Ensure it is writable by the user

os.chdir(".")  # Go back to current working directory
os.makedirs("docs")  # Create an empty directory
