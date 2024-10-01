import os

# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the current working directory
os.makedirs("docs", exist_ok=True)
with open("output.txt", "w") as f:
    pass
# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs" in the filesystem root
os.makedirs("/docs", exist_ok=True)
with open("/output.txt", "w") as f:
    pass
